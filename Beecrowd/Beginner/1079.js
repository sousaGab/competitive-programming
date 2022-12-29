var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var n = parseInt(lines[0]);
for (let i = 1; i <= n; i++) {
	var arr = lines[i].split(" ");
	var a = parseFloat(arr[0]);
	var b = parseFloat(arr[1]);
	var c = parseFloat(arr[2]);
	console.log(`${((a * 2 + b * 3 + c * 5) / 10).toFixed(1)}`);
}
