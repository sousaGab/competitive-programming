var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var arr = [0, 0, 0, 0];
var stop = false;
for (let l = 0; l < lines.length; l++) {
	var i = parseInt(lines[l]);
	i >= 1 && i <= 3 ? arr[i]++ : i === 4 ? (stop = true) : (stop = false);
	if (stop) break;
}
console.log(`MUITO OBRIGADO`);
console.log(`Alcool: ${arr[1]}`);
console.log(`Gasolina: ${arr[2]}`);
console.log(`Diesel: ${arr[3]}`);
