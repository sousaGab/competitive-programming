var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var n = parseInt(lines[0]);

var x,
	ans = "",
	sum,
	t;

for (let i = 1; i <= n; i++) {
	x = parseInt(lines[i]);
	sum = 0;
	t = 1;

	while (t < x) {
		if (x % t === 0) sum += t;
		if (sum > x) break;
		t++;
	}

	sum === x && x !== 1
		? (ans += `${x} eh perfeito\n`)
		: (ans += `${x} nao eh perfeito\n`);
}

process.stdout.write(ans);
