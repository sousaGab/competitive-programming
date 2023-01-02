var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var n, str, a, v, i, j, s, k;
var aux_arr = [];
var arr = [[]];

function f(t) {
	return t === 0 ? 1 : t === 1 ? 2 : t * 2;
}

str = "";

while (true) {
	n = parseInt(lines.shift());

	if (n === 0) break;

	a = 0;
	arr = [];

	for (i = 0; i < n; i++) {
		a = f(a);
		v = a;
		aux_arr = [];

		for (j = 0; j < n; j++) {
			s = Math.floor(Math.log10(v));
			aux_arr.push(v);
			v = f(v);
		}
		arr.push(aux_arr);
	}

	s++;

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			let t = Math.floor(Math.log10(arr[i][j]));
			let sz = j === 0 ? s - 1 : s;

			for (k = t; k < sz; k++) process.stdout.write(` `);
			process.stdout.write(`${arr[i][j]}`);
		}
		process.stdout.write(`\n`);
	}
	process.stdout.write(`\n`);
}
