var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");
var odd_arr = [],
	even_arr = [],
	n;
for (let i = 0; i < 15; i++) {
	n = parseInt(lines[i]);

	if (n % 2 === 0) even_arr.push(n);
	else odd_arr.push(n);

	if (odd_arr.length == 5) {
		print(odd_arr);
		odd_arr = [];
	}
	if (even_arr.length == 5) {
		print(even_arr);
		even_arr = [];
	}
}

print(odd_arr);
print(even_arr);

function print(arr) {
	var ans = "";
	st = arr[0] % 2 === 0 ? "par" : "impar";
	for (let i = 0; i < arr.length; i++) ans += `${st}[${i}] = ${arr[i]}\n`;
	process.stdout.write(ans);
}
