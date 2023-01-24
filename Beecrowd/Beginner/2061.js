var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var l = lines.shift().split(" ");
var n = parseInt(l[0]);
var m = parseInt(l[1]);
var x;

for (let i = 0; i < m; i++) {
	x = lines.shift();
	x[0] === "f" ? n++ : n--;
}
console.log(n);