var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");
var n = parseInt(lines[0]);
var ans = "",
	v;

function is_prime(x) {
	if (x === 1 || x === 2) return true;

	for (let j = 2; j <= Math.sqrt(x); j++) {
		if (x % j === 0) return false;
	}
	return true;
}

for (let i = 1; i <= n; i++) {
	v = parseInt(lines[i]);
	is_prime(v) ? (ans += `${v} eh primo\n`) : (ans += `${v} nao eh primo\n`);
}

process.stdout.write(ans);
