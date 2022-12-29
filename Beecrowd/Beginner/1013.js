var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");
var values = lines[0].split(" ");
var a = Number(values[0]);
var b = Number(values[1]);
var c = Number(values[2]);
var value = greatest(a, b);
value = greatest(value, c);
console.log(`${value} eh o maior`);

function greatest(a, b) {
	return (a + b + Math.abs(a - b)) / 2;
}
