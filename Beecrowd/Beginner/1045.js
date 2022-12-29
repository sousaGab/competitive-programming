var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var line = lines[0].split(" ");
var arr = [];
line.map((n) => {
	arr.push(Number(n));
});
arr.sort((a, b) => b - a);

var a = arr[0];
var b = arr[1];
var c = arr[2];

if (a >= b + c) {
	console.log(`NAO FORMA TRIANGULO`);
} else {
	if (a * a === b * b + c * c) {
		console.log(`TRIANGULO RETANGULO`);
	}
	if (a * a > b * b + c * c) {
		console.log(`TRIANGULO OBTUSANGULO`);
	}
	if (a * a < b * b + c * c) {
		console.log(`TRIANGULO ACUTANGULO`);
	}
	if (a === b && a === c) {
		console.log(`TRIANGULO EQUILATERO`);
	}
	if ((a === b && a !== c) || (b === c && a !== c) || (a === c && a !== b)) {
		console.log(`TRIANGULO ISOSCELES`);
	}
}
