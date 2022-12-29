var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var fixed_salary = Number(lines[1]);
var made_money = Number(lines[2]);
console.log(`TOTAL = R$ ${(fixed_salary + made_money * 0.15).toFixed(2)}`);
