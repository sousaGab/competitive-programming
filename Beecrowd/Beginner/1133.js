var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var a = parseInt(lines[0]);
var b = parseInt(lines[1]);
var y = Math.max(a, b);
var x = (y - a - b) * -1;
x++;
while (x % 5 != 3 && x % 5 != 2) x++;
for (let i = x; i < y; i % 5 == 3 ? (i += 4) : i++) console.log(i);
