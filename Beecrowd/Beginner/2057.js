var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var l = lines.shift().split(" ");
var arr = [];
for (let i = 0; i < l.length; i++) arr.push(parseInt(l[i]));
var ans = arr[0] + arr[1] + arr[2];
ans > 0 ? console.log(ans % 24) : console.log((24 + ans) % 24);