var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");
var cp = 0;
var ce = 0;
var cn = 0;
lines.forEach((x) => {
	let value = parseInt(x);
	value % 2 === 0 ? (ce += 1) : "";
	value > 0 ? (cp += 1) : "";
	value < 0 ? (cn += 1) : "";
});
console.log(`${ce} valor(es) par(es)`);

console.log(`${5 - ce} valor(es) impar(es)`);

console.log(`${cp} valor(es) positivo(s)`);

console.log(`${cn} valor(es) negativo(s)`);
