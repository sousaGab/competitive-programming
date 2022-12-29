var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

class Time {
	constructor(line_1, line_2) {
		if (line_1 == "" && line_2 == "") {
			this.day = 0;
			this.hour = 0;
			this.minute = 0;
			this.second = 0;
		} else {
			var arr = line_2.split(" : ");
			this.day = Number(line_1.replace("Dia ", ""));
			this.hour = Number(arr[0]);
			this.minute = Number(arr[1]);
			this.second = Number(arr[2]);
		}
	}
	print() {
		console.log(
			`${this.day} dia(s)\n${this.hour} hora(s)\n${this.minute} minuto(s)\n${this.second} segundo(s)`
		);
	}
}

var st = new Time(lines[0], lines[1]);
var nd = new Time(lines[2], lines[3]);
var out = new Time("", "");
var take = false;

if (nd.second < st.second) {
	take = true;
	nd.second += 60;
}
out.second = nd.second - st.second;
if (take) {
	nd.minute -= 1;
	if (nd.minute >= 0) take = false;
}
if (nd.minute < st.minute) {
	take = true;
	nd.minute += 60;
}
out.minute = nd.minute - st.minute;
if (take) {
	nd.hour -= 1;
	if (nd.hour >= 0) take = false;
}
if (nd.hour < st.hour) {
	take = true;
	nd.hour += 24;
}
out.hour = nd.hour - st.hour;
if (take) {
	nd.day -= 1;
}

out.day = nd.day - st.day;

out.print();
