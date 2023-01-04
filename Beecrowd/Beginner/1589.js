var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var n = parseInt(lines.shift());
var i, arr, l;
for (i = 0; i < n; i++) {
	l = lines.shift();
	arr = l.split(" ");
	process.stdout.write(`${parseInt(arr[0]) + parseInt(arr[1])}\n`);
}
