var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");
let salary = Number(lines[0]);

let taxes = 0;

let f = getTaxes(salary, 4500.0, 28);
taxes += f.taxes;
salary -= f.diff;

f = getTaxes(salary, 3000.0, 18);
taxes += f.taxes;
salary -= f.diff;

f = getTaxes(salary, 2000.0, 8);
taxes += f.taxes;
salary -= f.diff;

taxes <= 0.0 ? console.log("Isento") : console.log(`R$ ${taxes.toFixed(2)}`);

function getTaxes(salary, fixed, taxes) {
	let out = 0;
	let diff = salary - fixed;
	if (diff > 0.0) out = (diff * taxes) / 100;
	else diff = 0.0;
	return { taxes: out, diff: diff };
}
