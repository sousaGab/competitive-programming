var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var p1 = lines[0].split(" ");
var p2 = lines[1].split(" ");
var n1 = Number(p1[1]);
var n2 = Number(p2[1]);

var v1 = Number(p1[2]);
var v2 = Number(p2[2]);

console.log(`VALOR A PAGAR: R$ ${(n1 * v1 + n2 * v2).toFixed(2)}`);