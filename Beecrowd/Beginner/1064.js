var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");
var arr = [];
var average = 0;
lines.map((x) => {
	let value = Number(x);
	value > 0 ? arr.push(value) : "";
});
arr.map((x) => {
	average += x;
});

console.log(`${arr.length} valores positivos`);
console.log((average / arr.length).toFixed(1));
