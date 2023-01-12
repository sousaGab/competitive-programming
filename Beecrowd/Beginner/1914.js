var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var n = parseInt(lines.shift());

for (let i = 0; i < n; i++) {
	var l = lines.shift().split(" ");
	var arr = lines.shift().split(" ");

	var a = parseInt(arr[0]);
	var b = parseInt(arr[1]);
	var r = (a + b) % 2;

	if (r === 0) {
		if (l[1][0] === "P") console.log(`${l[0]}`);
		else console.log(`${l[2]}`);
	} else {
		if (l[1][0] === "I") console.log(`${l[0]}`);
		else console.log(`${l[2]}`);
	}
}
