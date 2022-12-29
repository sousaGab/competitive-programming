var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

lines.forEach((input) => {
	var n = parseInt(input);
	if (!isNaN(n)) {
		ans = "";
		for (let i = 0; i < n; i++) {
			for (let j = 0; j < n; j++)
				ans += i + j == n - 1 ? 2 : i == j ? 1 : 3;
			ans += "\n";
		}
		process.stdout.write(`${ans}`);
	}
});
