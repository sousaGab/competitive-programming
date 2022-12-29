var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

function main() {

    let times = Number(lines[0]);

    while (times) {

        lines.shift();
        const msg = lines[0];

        const first_step = move_letters(msg);

        const second_step = reverse_msg(first_step);

        const third_step = move_sencond_half(second_step);

        console.log(third_step);

        times--;
    }
}

function move_sencond_half(msg) {
    const half = Math.trunc(msg.length / 2);
    let new_msg = '';

    for (let i = 0; i < msg.length; i++) {

        if (i < half) {
            new_msg += msg[i];
        } else {
            new_msg += move_char(msg[i], -1);
        }
    }

    return new_msg;

}

function move_letters(msg) {
    let new_msg = '';
    for (var element of msg) {
        if (is_letter(element)) {
            const new_element = move_char(element, 3);
            new_msg += new_element;
        } else {
            new_msg += element;
        }
    }
    return new_msg;
}

function move_char(letter, pos) {
    return String.fromCharCode(letter.charCodeAt(0) + pos);
}

function is_letter(element) {
    return (element >= 'A' && element <= 'Z') || (element >= 'a' && element <= 'z');
}

function reverse_msg(msg) {
    return msg.split("").reverse().join("");
}

main()
