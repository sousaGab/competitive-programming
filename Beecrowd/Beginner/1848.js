var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var l, b;
var caw = 0;
var cnt = 0;
var ans = [0, 0, 0];

while (true) {
	l = lines.shift();

	if (l[0] === "c") {
		ans[caw] = cnt;
		cnt = 0;
		caw++;
		if (caw === 3) break;
	} else {
		b = "";
		for (let i = 0; i < 3; i++) {
			if (l[i] === "-") b += "0";
			else b += "1";
		}
		cnt += parseInt(b, 2);
	}
}

console.log(`${ans[0]}\n${ans[1]}\n${ans[2]}`);
