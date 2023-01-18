var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var l = lines.shift().split(" ");
var a = parseFloat(l[0]);
var b = parseFloat(l[1]);
console.log(`${(((b - a) * 100) / a).toFixed(2)}%`);