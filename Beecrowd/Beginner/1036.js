var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var values = lines[0].split(" ");
var a = Number(values[0]);
var b = Number(values[1]);
var c = Number(values[2]);

var delta = b * b - 4 * a * c;

if (delta < 0 || a === 0) {
	console.log(`Impossivel calcular`);
} else {
	var r1 = (-b + Math.sqrt(delta)) / (2 * a);
	var r2 = (-b - Math.sqrt(delta)) / (2 * a);

	console.log(`R1 = ${r1.toFixed(5)}`);
	console.log(`R2 = ${r2.toFixed(5)}`);
}
