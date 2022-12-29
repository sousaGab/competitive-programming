var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var n = parseInt(lines[0]);
for (let i = 1; i <= n; i++) {
	let arr = lines[i].split(" ");
	let x = parseInt(arr[0]);
	let y = parseInt(arr[1]);

	y === 0
		? console.log(`divisao impossivel`)
		: console.log(`${(x / y).toFixed(1)}`);
}
