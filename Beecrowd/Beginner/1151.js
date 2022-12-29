var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");
function fib(n) {
	let phi = (1 + Math.sqrt(5)) / 2;
	return Math.round(Math.pow(phi, n) / Math.sqrt(5));
}
var ans = "";
var n = parseInt(lines[0]);
for (let i = 0; i < n - 1; i++) ans += `${fib(i)} `;
ans += `${fib(n - 1)}\n`;
process.stdout.write(`${ans}`);
