var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

for (let i = 0; i < lines.length; i++) {
	let sum = 0;
	let arr = lines[i].split(" ");
	let x = parseInt(arr[0]);
	let y = parseInt(arr[1]);

	if (x <= 0 || y <= 0) break;

	let max = Math.max(x, y);
	let min = (max - x - y) * -1;
	for (let j = min; j <= max; j++) {
		process.stdout.write(`${j} `);
		sum += j;
	}
	process.stdout.write(`Sum=${sum}\n`);
}
