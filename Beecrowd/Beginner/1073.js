var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");
var n = parseInt(lines[0]);

for (let x = 2; x <= n; x += 2) {
	console.log(`${x}^2 = ${x * x}`);
}
