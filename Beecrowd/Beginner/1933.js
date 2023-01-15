var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var arr = lines.shift().split(" ");
var a = parseInt(arr[0]);
var b = parseInt(arr[1]);

console.log(`${Math.max(a, b)}`);