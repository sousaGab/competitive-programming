var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var evt = 0;
var n, str;
while (true) {
	str = lines.shift();

	if (str[1] === undefined) break;

	n = parseInt(str);

	evt++;
	numbers = 1;
	var ans = "0 ";

	for (let i = 0; i <= n; i++) {
		for (let j = 0; j < i; j++) {
			numbers++;
			ans += `${i} `;
		}
	}

	ans = ans.substring(0, ans.length - 1);

	numbers === 1
		? console.log(`Caso ${evt}: ${numbers} numero\n${ans}\n`)
		: console.log(`Caso ${evt}: ${numbers} numeros\n${ans}\n`);
}
