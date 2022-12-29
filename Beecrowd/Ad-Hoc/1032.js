var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");
function sieveOfEratosthenes(n) {
	let arr = [];
	prime = Array.from({ length: n + 1 }, (_, i) => true);
	for (p = 2; p * p <= n; p++) {
		if (prime[p] === true) {
			for (i = p * p; i <= n; i += p) prime[i] = false;
		}
	}

	for (i = 2; i <= n; i++) {
		if (prime[i] === true) arr.push(i);
	}

	return arr;
}

var prime_arr = sieveOfEratosthenes(1000000);

var n, arr, m, i;
var ans = "";
while (1) {
	n = parseInt(lines.shift());
	if (n === 0) break;
	arr = Array.from({ length: n }, (_, i) => i + 1);
	m = 0;
	i = 1;
	do {
		arr.splice(i, 1);
		m++;
		i = (i + prime_arr[m] - 1) % arr.length;
	} while (arr.length != 1);
	ans += `${arr[0]}\n`;
}
process.stdout.write(`${ans}`);
