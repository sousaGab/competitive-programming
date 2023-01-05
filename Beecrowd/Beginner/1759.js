var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var n = parseInt(lines);

for (let i = 0; i < n; i++)
	i === n - 1 ? process.stdout.write(`Ho!\n`) : process.stdout.write(`Ho `);
