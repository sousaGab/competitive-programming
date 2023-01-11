var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var n = parseInt(lines.shift());
var arr = lines.shift().split(" ");
var min = 100000;
var ans = -1;

for (let i = 0; i < n; i++) {
	var v = parseInt(arr[i]);
	if (v < min) {
		min = v;
		ans = i + 1;
	}
}

console.log(ans);
