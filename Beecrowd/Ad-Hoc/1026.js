var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var arr = [], a, b, ans, bit;
var out = "";
for (let l = 0; l < lines.length; l++) {
	arr = lines[l].split(" ");
	if (Number.isNaN(parseInt(arr[0])) || Number.isNaN(parseInt(arr[1]))) break;
	a = parseInt(arr[0]).toString(2).padStart(32, "0");
	b = parseInt(arr[1]).toString(2).padStart(32, "0");
	ans = "";
	for (bit = 0; bit < a.length; bit++) ans += `${a[bit] ^ b[bit]}`;
	out += `${parseInt(ans, 2)}\n`;
}
process.stdout.write(out);
