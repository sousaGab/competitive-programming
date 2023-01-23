var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var l = lines.shift().split(" ");
var c = parseInt(l[0]);
var p1 = parseInt(l[1]);
var p2 = parseInt(l[2]);
var sum = p1 + p2;
var r = parseInt(l[3]);
var a = parseInt(l[4]);

switch (c) {
	case 1:
		if (sum % 2 === 0) {
			switch (r) {
				case 1:
					a === 1
						? console.log("Jogador 2 ganha!")
						: console.log("Jogador 1 ganha!");
					break;
				case 0:
					console.log("Jogador 1 ganha!");
					break;
			}
		} else {
			switch (r) {
				case 1:
					a === 1
						? console.log("Jogador 2 ganha!")
						: console.log("Jogador 1 ganha!");
					break;
				case 0:
					console.log("Jogador 2 ganha!");
					break;
			}
		}
		break;
	case 0:
		if (sum % 2 !== 0) {
			switch (r) {
				case 1:
					a === 1
						? console.log("Jogador 2 ganha!")
						: console.log("Jogador 1 ganha!");
					break;
				case 0:
					console.log("Jogador 1 ganha!");
					break;
			}
		} else {
			switch (r) {
				case 1:
					a === 1
						? console.log("Jogador 2 ganha!")
						: console.log("Jogador 1 ganha!");
					break;
				case 0:
					console.log("Jogador 2 ganha!");
					break;
			}
		}
		break;
}
