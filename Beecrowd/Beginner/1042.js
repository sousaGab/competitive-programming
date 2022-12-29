var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");
var stdin = lines[0].split(" ");
var arr = [];
for (let v of stdin) arr.push(Number(v));
var aux_arr = arr.slice();
arr = arr.sort((a, b) => {
	return a - b;
});
for (let v of arr) console.log(v);
console.log("");
for (let v of aux_arr) console.log(v);
