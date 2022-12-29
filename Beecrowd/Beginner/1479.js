var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var n = parseInt(lines.shift()),
	l,
	ans,
	i,
	diff,
	j;

while (true) {
	l = 0;
	ans = "";

	while (l < n * n) {
		j = l % n;
		i = parseInt(l / n);
		diff = Math.abs(i - j) + 1;

		if (diff / 100 >= 1) ans += ``;
		else if (diff / 10 >= 1) {
			ans += ` `;
		} else ans += `  `;

		ans += `${diff}`;
		ans += j === n - 1 ? `\n` : ` `;
		l++;
	}
	process.stdout.write(`${ans}\n`);

	n = parseInt(lines.shift());

	if (n === 0) break;
}
