var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");
var arr = lines.shift().split("");
var ans = "";
arr.reverse().forEach((x) => {
	ans += x;
});
ans = ans.replace(/\D/g, "");
console.log(ans);