var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var n = parseInt(lines.shift());
var r = 0;
var v = 0;
var ans = "";
var romans = {
	1: "I",
	4: "IV",
	5: "V",
	9: "IX",
	10: "X",
	40: "XL",
	50: "L",
	90: "XC",
	100: "C",
	400: "CD",
	500: "D",
	900: "CM",
	1000: "M",
};

var arr = [1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1];

for (let i = 0; i < arr.length; i++) {
	r = n % arr[i];
	v = Math.floor(n / arr[i]);
	n -= v * arr[i];
	for (let j = 0; j < v; j++) ans += romans[arr[i]];
}

console.log(ans);
