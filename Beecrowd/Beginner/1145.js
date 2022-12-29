var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");
var arr = lines[0].split(" ");
var x = parseInt(arr[0]);
var y = parseInt(arr[1]);
for (let i = 1; i <= y; i++) {
	i % x === 0
		? process.stdout.write(`${i}\n`)
		: process.stdout.write(`${i} `);
}
