var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var t = lines.shift(),
	x,
	l = 0,
	sum = 0,
	cnt = 0,
	i,
	j;

while (l < 144) {
	x = parseFloat(lines.shift());
	j = l % 12;
	i = parseInt(l / 12);
	if (i < j) {
		if (i < 11 - j) {
			sum += x;
			cnt++;
		}
	}
	l++;
}

t[0] === "S"
	? console.log(sum.toFixed(1))
	: console.log((sum / cnt).toFixed(1));
