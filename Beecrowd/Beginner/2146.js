var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var t;

while (true) {
	if (lines.length === 1) break;
	t = parseInt(lines.shift());
	console.log(t - 1);
}
