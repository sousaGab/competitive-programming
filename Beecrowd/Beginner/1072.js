var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var n = parseInt(lines[0]);
var ans_in = 0;
var ans_out = 0;
for (let i = 1; i <= n; i++) {
	let x = parseInt(lines[i]);
	x >= 10 && x <= 20 ? ans_in++ : ans_out++;
}

console.log(`${ans_in} in\n${ans_out} out`);
