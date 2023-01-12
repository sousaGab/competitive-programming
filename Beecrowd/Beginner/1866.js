var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var n = parseInt(lines.shift());

for (let i = 0; i < n; i++) {
	var t = parseInt(lines.shift());
	if (t % 2 === 0) console.log("0");
	else console.log("1");
}
