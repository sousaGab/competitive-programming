var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

while (true) {
	let n = parseInt(lines.shift());
	if (isNaN(n)) break;
	var t = Math.floor(n / 3);

	var str = "";
	for (let i = 0; i < n; i++) {
		for (let j = 0; j < n; j++) {
			if (i === j && i === Math.floor(n / 2)) str += "4";
			else if (
				n - 1 - i <= n - 1 - t &&
				n - 1 - i >= t &&
				n - 1 - j <= n - 1 - t &&
				n - 1 - j >= t
			)
				str += "1";
			else if (i == j) str += "2";
			else if (i + j == n - 1) str += "3";
			else str += "0";
		}
		str += "\n";
	}

	console.log(`${str}`);
}
