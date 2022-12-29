var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");
var x, y, ans;
for (let i = 0; i < lines.length; i++) {
	x = parseInt(lines[i]);
	if (x === 0) break;
	y = 5;

	ans = 0;

	if (x % 2 !== 0) x++;

	while (y--) {
		ans += x;
		x += 2;
	}

	console.log(ans);
}
