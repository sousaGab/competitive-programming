var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");
var distance = Number(lines[0]);
console.log(`${distance * 2} minutos`);
