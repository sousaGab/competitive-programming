var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var line = lines[0].split(" ");
var arr = [];
line.map((n) => {
	arr.push(Number(n));
});

if (istMultiple(arr[0], arr[1])) console.log(`Sao Multiplos`);
else console.log(`Nao sao Multiplos`);

function istMultiple(a, b) {
	return a % b == 0 || b % a == 0;
}
