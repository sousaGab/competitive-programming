var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var n = parseInt(lines.shift());
var arr_ = lines.shift().split(" ");

var arr = [];
var aux = [];
var sum = 0;
var stars = 0;
var pos = 0;

for (let i = 0; i < n; i++) {
	let x = parseInt(arr_[i]);
	sum += x;
	arr.push(x);
	aux.push(0);
}

sum--;
aux[pos] = 1;
arr[pos]--;
pos = arr[pos] % 2 ? pos - 1 : pos + 1;

while (pos < n && pos >= 0) {
	if (arr[pos] === 0) break;
	if (arr[pos] > 0) {
		sum--;
		aux[pos] = 1;
		arr[pos]--;
	}
	pos = arr[pos] % 2 ? pos - 1 : pos + 1;
}

for (let i = 0; i < n; i++) stars += aux[i];

console.log(`${stars} ${sum}`);
