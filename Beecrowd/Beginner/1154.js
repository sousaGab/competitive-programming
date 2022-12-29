var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");
var x,
	sum = 0,
	c = 0;

while (1) {
	x = parseInt(lines.shift());
	if (x < 0) break;
	sum += x;
	c++;
}

console.log((sum / c).toFixed(2));
