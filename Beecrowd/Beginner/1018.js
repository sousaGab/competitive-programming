var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var value = Number(lines[0]);
var notes = [100, 50, 20, 10, 5, 2, 1];

console.log(value);

for (var note of notes) {
	var qtd = value / note;
	value = value % note;
	console.log(`${Math.floor(qtd)} nota(s) de R$ ${note},00`);
}
