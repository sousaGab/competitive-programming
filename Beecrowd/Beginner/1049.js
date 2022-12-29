var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

let arg1 = lines[0].replace(/(\r)/gm, "");
let arg2 = lines[1].replace(/(\r)/gm, "");
let arg3 = lines[2].replace(/(\r)/gm, "");

let dict = {
	vertebrado: {
		ave: {
			carnivoro: "aguia",
			onivoro: "pomba",
		},
		mamifero: {
			onivoro: "homem",
			herbivoro: "vaca",
		},
	},
	invertebrado: {
		inseto: {
			hematofago: "pulga",
			herbivoro: "lagarta",
		},
		anelideo: {
			hematofago: "sanguessuga",
			onivoro: "minhoca",
		},
	},
};

console.log(dict[arg1][arg2][arg3]);
