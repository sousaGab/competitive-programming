var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var n = parseInt(lines.shift());

for (let i = 0; i < n; i++) {
	var arr = lines.shift().split(" ");

	if (arr[0] === "Thor") console.log("Y");
	else console.log("N");
}
