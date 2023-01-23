var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");
var n = parseInt(lines.shift());
var player1, player2;
for (let i = 0; i < n; i++) {
	player1 = lines.shift().replace(/(\r\n|\n|\r)/gm, "");
	player2 = lines.shift().replace(/(\r\n|\n|\r)/gm, "");

	switch (player1) {
		case "ataque":
			switch (player2) {
				case "ataque":
					console.log("Aniquilacao mutua");
					break;
				case "pedra":
					console.log("Jogador 1 venceu");
					break;
				case "papel":
					console.log("Jogador 1 venceu");
					break;
			}
			break;
		case "pedra":
			switch (player2) {
				case "ataque":
					console.log("Jogador 2 venceu");
					break;
				case "pedra":
					console.log("Sem ganhador");
					break;
				case "papel":
					console.log("Jogador 1 venceu");
					break;
			}
			break;
		case "papel":
			switch (player2) {
				case "ataque":
					console.log("Jogador 2 venceu");
					break;
				case "pedra":
					console.log("Jogador 2 venceu");
					break;
				case "papel":
					console.log("Ambos venceram");
					break;
			}
			break;
	}
}
