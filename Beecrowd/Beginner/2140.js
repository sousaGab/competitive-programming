var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");
var l, n, m, diff, possible;

var bills = [2, 5, 10, 20, 50, 100];

while (true) {
	l = lines.shift().split(" ");

	n = parseInt(l[0]);
	m = parseInt(l[1]);

	diff = m - n;

	if (n === 0 && m === 0) break;

	possible = false;
	for (let i = 0; i < 6; i++) {
		for (let j = 0; j < 6; j++) {
			if (diff - bills[j] === bills[i]) possible = true;
		}
	}
	possible ? console.log(`possible`) : console.log(`impossible`);
}
