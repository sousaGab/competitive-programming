var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var line = lines[0].split(" ");

var hour = [];
line.map((n) => {
	hour.push(Number(n));
});

var value = { hour: 0, minutes: 0 };

if (hour[0] === hour[2] && hour[1] == hour[3]) {
	value.hour = 24;
	value.minutes = 0;
} else if (hour[0] < hour[2]) {
	value.hour = hour[2] - hour[0];
	var f = calc_minutes(hour);
	value.minutes = f.minutes;
	value.hour += f.hour;
} else if (hour[0] === hour[2]) {
	var f = calc_minutes(hour);
	if (f.hour === -1) value.hour = 23;
	else value.hour = 0;
	value.minutes = f.minutes;
} else {
	value.hour = Math.abs(24 - hour[0]) + hour[2];
	var f = calc_minutes(hour);
	value.minutes = f.minutes;
	value.hour += f.hour;
}

console.log(`O JOGO DUROU ${value.hour} HORA(S) E ${value.minutes} MINUTO(S)`);

function calc_minutes(h) {
	var minutes = 0;
	var hour = 0;
	if (h[1] < h[3]) {
		minutes = h[3] - h[1];
	} else if (h[1] > h[3]) {
		minutes = Math.abs(60 - h[1]) + h[3];
		hour = -1;
	}
	return { hour: hour, minutes: minutes };
}
