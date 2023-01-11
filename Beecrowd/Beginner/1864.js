var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var str = "LIFE IS NOT A PROBLEM TO BE SOLVED";
var n = parseInt(lines.shift());
console.log(str.substring(0, n));
