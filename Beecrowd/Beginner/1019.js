var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");
var duration = Number(lines[0]);
var hours = Math.floor(duration / 3600);
duration = duration % 3600;
var minutes = Math.floor(duration / 60);
duration = duration % 60;
var seconds = Math.floor(duration);
console.log(`${hours}:${minutes}:${seconds}`);
