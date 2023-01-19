var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var n = parseInt(lines.shift());
var l, nb, score;
var index = '';
var hi = -1;

for (let i = 0; i < n; i++) {
	l = lines.shift().split(" ");
	nb = l[0];
	score = parseFloat(l[1]);

	if (score > hi) {
		hi = score;
		index = nb;
	}
}

if (hi < 8) console.log(`Minimum note not reached`);
else console.log(`${index}`);