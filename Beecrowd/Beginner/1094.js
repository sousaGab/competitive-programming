var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var n = parseInt(lines[0]);
var arr = [0, 0, 0];
var total = 0;
var dict = {
	C: 0,
	R: 1,
	S: 2,
};

for (let i = 1; i <= n; i++) {
	var input = lines[i].split(" ");
	var x = parseInt(input[0]);
	var type = input[1].replace(/[\r\n]/gm, "");
	arr[dict[type]] += x;
	total += x;
}

console.log(`Total: ${total} cobaias`);
console.log(`Total de coelhos: ${arr[0]}`);
console.log(`Total de ratos: ${arr[1]}`);
console.log(`Total de sapos: ${arr[2]}`);
console.log(`Percentual de coelhos: ${((arr[0] * 100) / total).toFixed(2)} %`);
console.log(`Percentual de ratos: ${((arr[1] * 100) / total).toFixed(2)} %`);
console.log(`Percentual de sapos: ${((arr[2] * 100) / total).toFixed(2)} %`);
