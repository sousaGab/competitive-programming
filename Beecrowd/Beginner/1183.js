var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var t = lines.shift(),
	x,
	l = 0,
	sum = 0;

while (l < 144) {
	x = parseFloat(lines.shift());
	if (l % 12 > parseInt(l / 12)) {
		sum += x;
	}
	l++;
}

t[0] === "S"
	? console.log(sum.toFixed(1))
	: console.log((sum / (144 / 2 - 6)).toFixed(1));
