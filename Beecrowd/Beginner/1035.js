var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var values = [];
for (var l of lines[0].split(" ")) {
	values.push(Number(l));
}

if (accepted(values[0], values[1], values[2], values[3])) {
	console.log(`Valores aceitos`);
} else {
	console.log(`Valores nao aceitos`);
}

function accepted(a, b, c, d) {
	return b > c && d > a && c + d > a + b && c >= 0 && d >= 0 && a % 2 === 0;
}
