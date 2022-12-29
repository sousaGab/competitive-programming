var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");
var n = parseInt(lines[0]);
var x = 1;
while (n--) {
	console.log(`${x} ${Math.pow(x, 2)} ${Math.pow(x, 3)}`);
	console.log(`${x} ${Math.pow(x, 2) + 1} ${Math.pow(x, 3) + 1}`);
	x++;
}
