var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");
var n,
	ans = "";
for (let i = 0; i < 100; i++) {
	n = parseFloat(lines[i]);
	n <= 10 ? (ans += `A[${i}] = ${n.toFixed(1)}\n`) : "";
}
process.stdout.write(ans);
