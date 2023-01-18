var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var n = parseInt(lines.shift());

for (let i = 0; i < n; i++) {
	var y_ago = parseInt(lines.shift());
	var year = 2015 - y_ago;
	if (year > 0) {
		console.log(`${year} D.C.`);
	} else if (year < 0) {
		console.log(`${Math.abs(year) + 1} A.C.`);
	} else {
		console.log(`1 A.C.`);
	}
}