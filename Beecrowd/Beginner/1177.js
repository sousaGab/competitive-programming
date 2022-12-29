var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");
var n = parseInt(lines[0]),
	i,
	ans = "";
for (i = 0; i < 1000; i++) ans += `N[${i}] = ${i % n}\n`;
process.stdout.write(ans);
