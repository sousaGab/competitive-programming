var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");
var t = parseInt(lines[0]);
var l, pa, pb, ga, gb, years;

for (let i = 1; i <= t; i++) {
	l = lines[i].split(" ");

	pa = parseInt(l[0]);
	pb = parseInt(l[1]);
	ga = parseFloat(l[2]);
	gb = parseFloat(l[3]);

	years = 0;

	while (pa <= pb && years < 101) {
		pa += parseInt((pa * ga) / 100);
		pb += parseInt((pb * gb) / 100);
		years++;
	}

	years > 100
		? process.stdout.write(`Mais de 1 seculo.\n`)
		: process.stdout.write(`${years} anos.\n`);
}
