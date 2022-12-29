var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var values = lines[0].split(" ");
const pi = 3.14159;
var a = Number(values[0]);
var b = Number(values[1]);
var c = Number(values[2]);

console.log(`TRIANGULO: ${((a * c) / 2.0).toFixed(3)}`);
console.log(`CIRCULO: ${(pi * c * c).toFixed(3)}`);
console.log(`TRAPEZIO: ${(((a + b) * c) / 2.0).toFixed(3)}`);
console.log(`QUADRADO: ${(b * b).toFixed(3)}`);
console.log(`RETANGULO: ${(a * b).toFixed(3)}`);
