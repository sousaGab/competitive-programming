var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var arr, v, x;

while (true) {
	v = lines.shift();

	if (v === "0") break;

	arr = v.split(" ");

	x = (arr[0] * arr[1] * 100) / arr[2];
	x = Math.sqrt(x);

	console.log(Math.trunc(x));
}
