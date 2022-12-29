var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var count = 0;
lines.map((x) => {
	let value = parseInt(x);
	value % 2 === 0 ? (count += 1) : "";
});
console.log(`${count} valores pares`);
