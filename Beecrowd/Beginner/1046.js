var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var line = lines[0].split(" ");

var hour = [];
line.map((n) => {
	hour.push(Number(n));
});

var value = 0;

if (hour[0] < hour[1]) value = hour[1] - hour[0];
else if (hour[0] === hour[1]) value = 24;
else value = Math.abs(24 - hour[0]) + hour[1];

console.log(`O JOGO DUROU ${value} HORA(S)`);
