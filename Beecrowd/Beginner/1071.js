var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");
var x = parseInt(lines[0]);
var y = parseInt(lines[1]);
var max = Math.max(x, y);
var min = Math.min(x, y);

var ans = 0;

for (var i = min + 1; i < max; i += 2)
	i % 2 !== 0 ? (ans += i) : i + 1 < max ? (ans += i + 1) : "";

console.log(ans);
