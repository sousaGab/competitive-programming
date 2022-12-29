var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");
for (let i = 0; i < lines.length; i++) {
	let x = parseInt(lines[i]);
	if (x === 2002) {
		console.log(`Acesso Permitido`);
		break;
	} else {
		console.log(`Senha Invalida`);
	}
}
