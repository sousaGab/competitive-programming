var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");
var n = parseInt(lines.shift()),
	l,
	x,
	y,
	ans;

for (let i = 1; i <= n; i++) {
	l = lines.shift().split(" ");
	x = parseInt(l.shift());
	y = parseInt(l.shift());
	ans = 0;
	if (x % 2 === 0) x++;
	while (y--) {
		ans += x;
		x += 2;
	}
	console.log(ans);
}
