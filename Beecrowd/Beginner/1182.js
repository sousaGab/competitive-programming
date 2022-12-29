var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var c = parseInt(lines.shift()),
	t = lines.shift(),
	l = 0,
	m = matrix(12, 12);

while (l < 144) {
	m[parseInt(l / 12)][l % 12] = parseFloat(lines.shift());
	l++;
}
if (t[0] === "S") {
	var sum = 0;
	for (let j = 0; j < 12; j++) {
		//console.log(`sum : ${sum}, m[${j}][${c}] = ${m[c][j]}`);
		sum += m[j][c];
	}
	console.log(sum.toFixed(1));
} else {
	var sum = 0;
	for (let j = 0; j < 12; j++) sum += m[j][c];
	console.log((sum / 12).toFixed(1));
}

function matrix(m, n) {
	var result = [];
	for (var i = 0; i < n; i++) {
		result.push(new Array(m).fill(0));
	}
	return result;
}
