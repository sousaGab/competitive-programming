var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

while (lines.length) {
	let n = parseInt(lines.shift());
	let l = lines.shift();
	if (l === undefined) break;
	let arr = l.split(" ");
	let max = -1;

	for (let i = 0; i < n; i++)
		max = max > parseInt(arr[i]) ? max : parseInt(arr[i]);

	if (max < 10) process.stdout.write(`1\n`);
	else if (max >= 10 && max < 20) process.stdout.write(`2\n`);
	else process.stdout.write(`3\n`);
}
