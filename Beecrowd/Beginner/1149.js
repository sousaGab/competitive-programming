var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");
var arr = lines[0].split(" ");
var a = parseInt(arr[0]);
var n = parseInt(arr[arr.length - 1]);
var ans = (n * (n - 1)) / 2;
process.stdout.write(`${ans + a * n}\n`);
