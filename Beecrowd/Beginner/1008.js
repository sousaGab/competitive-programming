var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var number = Number(lines[0]);
var workerd_h = Number(lines[1]);
var received_h = Number(lines[2]);

console.log(`NUMBER = ${number}`);
console.log(`SALARY = U$ ${(received_h * workerd_h).toFixed(2)}`);
