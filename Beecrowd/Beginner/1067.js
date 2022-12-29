var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");
var value = parseInt(lines[0]);
for (var i = 1; i <= value; i += 2) console.log(i);
