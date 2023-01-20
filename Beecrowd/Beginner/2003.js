var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

while (true) {
	
	if (lines.length === 0) break;

	var h = lines.shift().split(":");
	
	if (h.length === 1) break;

	var hour = parseInt(h[0]);
	var min = parseInt(h[1]);

	var x = hour * 60;
	var min_ = 8 * 60 - (x + min);

	var ans = 60 - min_;

	ans >= 0
		? console.log(`Atraso maximo: ${ans}`)
		: console.log(`Atraso maximo: 0`);
}