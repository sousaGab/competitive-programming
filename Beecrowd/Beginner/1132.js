var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var a = parseInt(lines[0]);
var b = parseInt(lines[1]);
var y = Math.max(a, b);
var x = (y - a - b) * -1;
var sum = 0;
var all = ((x + y) * (y - x + 1)) / 2;
x += 13 - (x % 13);
for (let i = x; i <= y; i += 13) sum += i;
console.log(`${all - sum}`);
