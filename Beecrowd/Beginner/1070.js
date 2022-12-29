var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");
var x = parseInt(lines[0]);
for (var i = 0; i < 6; i++) {
	x % 2 != 0 ? console.log(x) : console.log(x + 1);
	x += 2;
}
