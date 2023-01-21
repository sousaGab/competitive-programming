var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var v, d, str, h, s;
var pi = 3.14;
while (true) {
	str = lines.shift();
	v = parseFloat(str);
	str = lines.shift();
	d = parseFloat(str);

	if (isNaN(v) || isNaN(d)) break;

	h = v / pi / ((d / 2) * (d / 2));
	s = pi * (d / 2) * (d / 2);

	console.log(`ALTURA = ${h.toFixed(2)}`);

	console.log(`AREA = ${s.toFixed(2)}`);

	if (lines.length === 0) break;
}