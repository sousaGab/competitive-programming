var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var c = parseInt(lines.shift());

for (let i = 0; i < c; i++) {
	let str = lines.shift().replace(/(\r\n|\n|\r)/gm, "");
	console.log((str.length * 0.01).toFixed(2));
}
