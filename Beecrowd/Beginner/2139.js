var l, month, day, days, left;
var month_days = [31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];

while (true) {
	days = 0;
	l = lines.shift();

	if (l === undefined || isNaN(parseFloat(l[0]))) break;

	l = l.split(" ");

	month = parseInt(l.shift());
	day = parseInt(l.shift());

	for (let i = 0; i < month; i++) days += month_days[i];

	days -= month_days[month - 1] - day;

	left = 360 - days;

	if (left > 0)
		left === 1
			? console.log(`E vespera de natal!`)
			: console.log(`Faltam ${left} dias para o natal!`);
	else if (left < 0) console.log(`Ja passou!`);
	else console.log(`E natal!`);
}
