var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var n = parseInt(lines[0]);
var x = 0;
while (n--) {
	console.log(`${x + 1} ${x + 2} ${x + 3} PUM`);
	x += 4;
}
