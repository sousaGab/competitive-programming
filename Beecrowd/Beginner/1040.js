var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var values = lines[0].split(" ");

var scores = [];
for (let v of values) scores.push(Number(v));

var avarage =
	(scores[0] * 2 + scores[1] * 3 + scores[2] * 4 + scores[3]) /
	(2 + 3 + 4 + 1);

console.log(`Media: ${avarage.toFixed(1)}`);
avarage = Number(avarage.toFixed(1));

if (avarage >= 7.0) {
	console.log("Aluno aprovado.");
} else if (avarage < 7.0 && avarage >= 5.0) {
	console.log("Aluno em exame.");
	var exam = Number(lines[1]);
	console.log(`Nota do exame: ${exam.toFixed(1)}`);

	avarage = (exam + avarage) / 2;

	avarage = Number(avarage.toFixed(1));

	if (avarage >= 5.0) {
		console.log("Aluno aprovado.");
	} else {
		console.log("Aluno reprovado");
	}

	console.log(`Media final: ${avarage.toFixed(1)}`);
} else {
	console.log("Aluno reprovado.");
}
