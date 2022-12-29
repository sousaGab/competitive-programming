var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");
var n, i, str;
for (let l = 0; l <= lines.length; l++) {
	str = "";
	n = parseInt(lines[l]);
	if (n === 0) break;
	for (i = 1; i < n; i++) str += `${i} `;
	str += `${n}\n`;
	process.stdout.write(str);
}
