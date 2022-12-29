var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var dict = {
	1: 4.0,
	2: 4.5,
	3: 5.0,
	4: 2.0,
	5: 1.5,
};
var values = lines[0].split(" ");
var cod = values[0];
var amount = values[1];
console.log(`Total: R$ ${(dict[cod] * amount).toFixed(2)}`);
