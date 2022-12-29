var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

function fc(n) {
	let ans = Array(n).fill(0);
	ans[0] = 1;
	for (let i = 1; i <= n; i++) ans[i] = i * ans[i - 1];
	return ans[n];
}
var n = parseInt(lines[0]);
console.log(fc(n));
