var cs = 0;

while (true) {
	var n = lines.shift();
	if (isNaN(parseFloat(n))) break;

	n = n.replace(/(\r\n|\n|\r)/gm, "");
	var str = lines.shift().replace(/(\r\n|\n|\r)/gm, "");

	var cnt = 0;
	var pos = 0;

	for (let i = 0; i < str.length; i++) {
		if (str[i] === n[0]) {
			let p = i;
			let flag = true;
			for (let j = 0; j < n.length; j++)
				if (j + i == str.length || str[j + i] !== n[j]) flag = false;

			if (flag) {
				pos = p;
				cnt++;
			}
		}
	}
	cs++;

	cnt === 0
		? console.log(`Caso #${cs}:\nNao existe subsequencia\n`)
		: console.log(
				`Caso #${cs}:\nQtd.Subsequencias: ${cnt}\nPos: ${pos + 1}\n`
		  );
}
