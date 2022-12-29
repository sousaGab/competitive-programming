var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");
var n = parseInt(lines[0]);

for (let i = 1; i <= n; i++) {
	let sum = 0;
	let arr = lines[i].split(" ");
	let x = parseInt(arr[0]);
	let y = parseInt(arr[1]);
	let max = Math.max(x, y);
	let min = (max - x - y) * -1;
	for (let j = min + 1; j < max; j++) j % 2 !== 0 ? (sum += j) : (sum = sum);
	console.log(sum);
}
