var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var line = lines[0].split(" ");
var arr = [];
line.map((n) => {
	arr.push(Number(n));
});

if (itsPossible(arr[0], arr[1], arr[2])) {
	let value = 0;
	arr.map((n) => {
		value += n;
	});
	console.log(`Perimetro = ${value.toFixed(1)}`);
} else {
	let value = ((arr[0] + arr[1]) * arr[2]) / 2;
	console.log(`Area = ${value.toFixed(1)}`);
}

function itsPossible(a, b, c) {
	return a + b > c && a + c > b && c + b > a;
}
