var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");
var monetary = Number(lines[0]);
var notes = [100, 50, 20, 10, 5, 2];
var coins = [1, 0.5, 0.25, 0.1, 0.05];

console.log("NOTAS:");
for (var note of notes) {
	var value = Math.floor(monetary / note);
	monetary = monetary % note;
	console.log(`${value} nota(s) de R$ ${note}.00`);
}

console.log("MOEDAS:");
for (var coin of coins) {
	var value = Math.floor(monetary / coin);
	monetary = monetary % coin;
	console.log(`${value} moeda(s) de R$ ${coin.toFixed(2)}`);
}

console.log(`${Math.round(monetary / 0.01)} moeda(s) de R$ 0.01`);
