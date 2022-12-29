var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");
var line = [],
	n,
	k,
	j,
	arr,
	ans = "";
var x = parseInt(lines[0]);
for (let i = 1; i <= x; i++) {
	j = 0;

	line = lines[i].split(" ");

	n = parseInt(line[0]);
	k = parseInt(line[1]);

	arr = Array.from({ length: n }, (_, j) => j + 1);

	while (arr.length > 1) {
		j = (j + k - 1) % arr.length;
		arr.splice(j, 1);
	}

	ans += `Case ${i}: ${arr[0]}\n`;
}
process.stdout.write(ans);
