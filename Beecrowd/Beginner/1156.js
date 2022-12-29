var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var i = 1,
	j = 1,
	sum = 0;
while (i < 39) {
	sum += i / j;
	i += 2;
	j *= 2;
}
console.log(sum.toFixed(2));
