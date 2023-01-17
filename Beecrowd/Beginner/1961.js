var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var flag = true;
var l = lines.shift().split(" ");
var p = parseInt(l[0]);
var n = parseInt(l[1]);

var pipes = lines.shift().split(" ");
var b = parseInt(pipes[0]);

for (let i = 1; i < n; i++) {
	var nxt = parseInt(pipes[i]);
	if (Math.abs(nxt - b) > p) {
		flag = false;
		break;
	}
	b = nxt;
}

if (flag) console.log(`YOU WIN`);
else console.log(`GAME OVER`);
