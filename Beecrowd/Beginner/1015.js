var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");
var p1 = lines[0].split(" ");
var p2 = lines[1].split(" ");
var x1 = Number(p1[0]);
var x2 = Number(p2[0]);
var y1 = Number(p1[1]);
var y2 = Number(p2[1]);
console.log(
	`${Math.sqrt(Math.pow(x2 - x1, 2) + Math.pow(y2 - y1, 2)).toFixed(4)}`
);
