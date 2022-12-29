var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

for (let i = 0; i < lines.length; i++) {
	let arr = lines[i].split(" ");
	let x = parseInt(arr[0]);
	let y = parseInt(arr[1]);
	if (x === y) break;
	let max = Math.max(x, y);
	x === max ? console.log(`Decrescente`) : console.log(`Crescente`);
}
