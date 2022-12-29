var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var n = -1;
var pos = 0;
for (let i = 0; i < 100; i++) {
	let x = parseInt(lines[i]);
	if (n < x) {
		n = x;
		pos = i;
	}
}
console.log(`${n}\n${pos + 1}`);
