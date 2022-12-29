var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");
var n = parseInt(lines[0]);
for (let i = 1; i <= n; i++) {
	var x = parseInt(lines[i]);
	if (x === 0) {
		console.log(`NULL`);
	} else {
		let positive = x > 0;
		let even = x % 2 === 0;
		console.log(
			`${even ? "EVEN" : "ODD"} ${positive ? "POSITIVE" : "NEGATIVE"}`
		);
	}
}
