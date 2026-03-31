const fs = require('fs');
const input = fs.readFileSync(0, 'utf8').trim().split(/\s+/);
let cur = 0;
function next() { return input[cur++]; }

function solve() {
    // Pake n di akhir atau BigInt() buat angka > 15 digit
    let a = BigInt(next());
    let b = BigInt(next());
    console.log((a * b).toString()); // BigInt harus di-string-kan buat dicetak
}
solve();
