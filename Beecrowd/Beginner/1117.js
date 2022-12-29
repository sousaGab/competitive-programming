var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");
var arr = [];
for (let i = 0; i < lines.length; i++) {
	let x = parseFloat(lines[i]);
	x < 0 || x > 10 ? console.log(`nota invalida`) : arr.push(x);
	if (arr.length == 2) {
		console.log(`media = ${((arr[0] + arr[1]) / 2).toFixed(2)}`);
		break;
	}
}
