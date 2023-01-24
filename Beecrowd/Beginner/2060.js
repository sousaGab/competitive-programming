var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var n = parseInt(lines.shift());
var arr = lines.shift().split(" ");
var m2 = 0,
	m3 = 0,
	m4 = 0,
	m5 = 0,
	x;

for (let i = 0; i < n; i++) {
	x = parseInt(arr[i]);

	x % 2 === 0 ? m2++ : "";
	x % 3 === 0 ? m3++ : "";
	x % 4 === 0 ? m4++ : "";
	x % 5 === 0 ? m5++ : "";
}

console.log(`${m2} Multiplo(s) de 2`);
console.log(`${m3} Multiplo(s) de 3`);
console.log(`${m4} Multiplo(s) de 4`);
console.log(`${m5} Multiplo(s) de 5`);
