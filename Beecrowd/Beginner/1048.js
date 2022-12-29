var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var salary = Number(lines[0]);

var table = [15, 12, 10, 7, 4];

var new_salary = 0.0;
var earned = 0.0;
var percentage = 0;
var index = 0;

if (salary <= 400.0) index = 0;
else if (salary <= 800.0) index = 1;
else if (salary <= 1200.0) index = 2;
else if (salary <= 2000.0) index = 3;
else if (salary > 2000.0) index = 4;

percentage = table[index];
earned = (salary * percentage) / 100;
new_salary = salary + earned;

console.log(`Novo salario: ${new_salary.toFixed(2)}`);
console.log(`Reajuste ganho: ${earned.toFixed(2)}`);
console.log(`Em percentual: ${percentage} %`);
