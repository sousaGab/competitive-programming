var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");
r = Number(lines[0]);
const pi = 3.14159;
var vol = (4 / 3.0) * pi * r * r * r;
console.log(`VOLUME = ${vol.toFixed(3)}`);
