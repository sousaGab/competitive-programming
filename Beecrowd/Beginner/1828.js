var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

let n = parseInt(lines.shift());

var cases = ["pedra", "papel", "lagarto", "tesoura", "Spock"];
var win = [3, 1, 0, 2, 4, 3, 2, 1, 4, 0];
var lose = [1, 0, 2, 4, 3, 2, 1, 4, 0, 3];

var c = 1;

while (c <= n) {
	var l = lines.shift().split(" ");
	l[1] = l[1].replace(/(\r\n|\n|\r)/gm, "");

	for (let i = 0; i < 10; i++) {
		if (l[0] === l[1]) {
			console.log(`Caso #${c}: De novo!`);
			break;
		} else if (l[1] == cases[win[i]] && l[0] == cases[lose[i]]) {
			console.log(`Caso #${c}: Raj trapaceou!`);
			break;
		} else if (l[0] == cases[win[i]] && l[1] == cases[lose[i]]) {
			console.log(`Caso #${c}: Bazinga!`);
			break;
		}
	}

	c++;
}
