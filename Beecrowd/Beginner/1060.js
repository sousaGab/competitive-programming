var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

let count = 0;
lines.map((x) => {
	let value = Number(x);
	value > 0 ? (count += 1) : null;
});
console.log(`${count} valores positivos`);
