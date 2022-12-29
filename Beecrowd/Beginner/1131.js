var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var ans = [0, 0, 0];
var gn = 0;
for (let i = 0; i < lines.length; i++) {
	let arr = lines[i].split(" ");
	let a = parseInt(arr[0]);
	let b = parseInt(arr[1]);
	gn++;
	a > b ? ans[0]++ : a < b ? ans[1]++ : ans[2]++;
	console.log(`Novo grenal (1-sim 2-nao)`);
	i++;
	if (parseInt(lines[i]) === 2) break;
}

console.log(`${gn} grenais`);
console.log(`Inter:${ans[0]}`);
console.log(`Gremio:${ans[1]}`);
console.log(`Empates:${ans[2]}`);
ans[0] === ans[1]
	? console.log(`Não houve vencedor`)
	: ans[0] > ans[1]
	? console.log(`Inter venceu mais`)
	: console.log(`Gremio venceu mais`);
