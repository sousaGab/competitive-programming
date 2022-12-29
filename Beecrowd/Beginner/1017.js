var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");
var spent_time = Number(lines[0]);
var average_speed = Number(lines[1]);
var distance = average_speed * spent_time;
console.log(`${(distance / 12).toFixed(3)}`);
