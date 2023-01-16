var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var arr = lines.shift().split(" ");
console.log(parseInt(arr[0]) * parseInt(arr[1]));