var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");
var lines = input.split("\n");
var n = parseInt(lines[0]),
	ans = "";
for (let i = 0; i < 10; i++, n *= 2) ans += `N[${i}] = ${n}\n`;
process.stdout.write(ans);
