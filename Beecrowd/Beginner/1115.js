var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

for (let i = 0; i < lines.length; i++) {
	let arr = lines[i].split(" ");
	let x = parseInt(arr[0]);
	let y = parseInt(arr[1]);

	if (x === 0 || y === 0) break;

	if (y > 0) {
		if (x > 0) console.log(`primeiro`);
		else console.log(`segundo`);
	} else {
		if (x > 0) console.log(`quarto`);
		else console.log(`terceiro`);
	}
}
