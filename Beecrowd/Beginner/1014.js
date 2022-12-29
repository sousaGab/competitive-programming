var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");
var x = Number(lines[0]);
var y = Number(lines[1]);

console.log(`${(x / y).toFixed(3)} km/l`);
