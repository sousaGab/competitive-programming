var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var arr_ = lines.shift().split(" ");
var arr = [];

function form(a, b, c) {
	return a + b > c && a + c > b && b + c > a;
}

for (let i = 0; i < 4; i++) arr.push(parseInt(arr_[i]));

if (
	form(arr[0], arr[1], arr[2]) ||
	form(arr[0], arr[2], arr[3]) ||
	form(arr[0], arr[1], arr[3]) ||
	form(arr[1], arr[2], arr[3])
)
	console.log("S");
else console.log("N");