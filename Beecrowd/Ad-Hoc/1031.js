var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");
var n, arr, m, i;
while (1) {
	n = parseInt(lines.shift());
	if (n === 0) break;
	aux = Array.from({ length: n }, (_, i) => i + 1);
	m = 0;
	do {
		arr = [...aux];
		i = 0;

		while (arr.length != 1) {
			arr.splice(i, 1);
			i = (i + m) % arr.length;
		}
		m++;
	} while (arr[0] != 13);

	console.log(m);
}
