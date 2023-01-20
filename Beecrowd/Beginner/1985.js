var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var dic = {
	1001: 1.5,
	1002: 2.5,
	1003: 3.5,
	1004: 4.5,
	1005: 5.5,
};

var n = parseInt(lines.shift());
var l, q;
var sum = 0;
for (let i = 0; i < n; i++) {
	l = lines.shift().split(" ");

	index = parseInt(l[0]);
	q = parseInt(l[1]);

	sum += dic[index] * q;
}

console.log(sum.toFixed(2));