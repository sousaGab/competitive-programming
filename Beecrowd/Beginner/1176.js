var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");
var fib_arr = [0, 1],
	i,
	ans = "",
	n = parseInt(lines[0]),
	x;

for (i = 2; i <= 100; i++) fib_arr.push(fib_arr[i - 1] + fib_arr[i - 2]);

for (i = 1; i <= n; i++) {
	x = parseInt(lines[i]);
	ans += `Fib(${x}) = ${fib_arr[x]}\n`;
}
process.stdout.write(ans);
