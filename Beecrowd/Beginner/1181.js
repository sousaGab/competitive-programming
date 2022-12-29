var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var n = parseInt(lines.shift()),
	t = lines.shift(),
	x,
	l = 0,
	sum = 0;

while (l < 144) {
	x = parseFloat(lines.shift());
	if (parseInt(l / 12) === n) {
		sum += x;
	}
	l++;
}

t[0] === "S"
	? console.log(sum.toFixed(1))
	: console.log((sum / (144 / 12)).toFixed(1));
