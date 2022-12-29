var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var A = Number(lines[0]);
var B = Number(lines[1]);
var C = Number(lines[2]);

var out = (A * 2 + B * 3 + C * 5) / (2 + 3 + 5);

console.log(`MEDIA = ${out.toFixed(1)}`);
