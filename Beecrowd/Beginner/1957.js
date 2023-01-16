var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var n = parseInt(lines.shift());
console.log(n.toString(16).toUpperCase());
