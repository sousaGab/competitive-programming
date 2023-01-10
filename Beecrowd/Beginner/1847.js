var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var arr = lines[0].split(" ");

var a = parseInt(arr[0]);
var b = parseInt(arr[1]);
var c = parseInt(arr[2]);

var d1 = b - a;
var d2 = c - b;

if (
	(d1 < 0 && d2 >= 0) ||
	(d1 > 0 && d1 <= d2) ||
	(d1 < 0 && d1 < d2) ||
	(d1 === 0 && d2 > 0)
) {
	console.log(":)");
} else {
	console.log(":(");
}
