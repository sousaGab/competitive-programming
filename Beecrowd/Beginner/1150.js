var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");
var a = parseInt(lines.shift()),
	b = parseInt(lines.shift()),
	sum = 0,
	ans = a;

while (b <= a) b = parseInt(lines.shift());

do {
	sum += ans;
	ans++;
} while (sum <= b);

process.stdout.write(`${ans - a}\n`);
