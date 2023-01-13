var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var arr_ = lines.shift().split(" ");
var c = 0;

for (let i = 0; i < 4; i++) c += parseInt(arr_[i]);

console.log(`${c - 3}`);
