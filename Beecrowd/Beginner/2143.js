var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var t, n, i;

while (true) {
	t = parseInt(lines.shift());
	if (t === 0) break;

	for (i = 0; i < t; i++) {
		n = parseInt(lines.shift());
		n % 2 === 0 ? console.log(n * 2 - 2) : console.log(n * 2 - 1);
	}
}
