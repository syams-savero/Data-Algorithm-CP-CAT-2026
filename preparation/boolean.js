const fs = require('fs');
const input = fs.readFileSync(0, 'utf8').trim().split(/\s+/);
let cur = 0;
function next() { return input[cur++]; }

function solve() {
    let n = Number(next());
    let isGenap = (n % 2 === 0); // Menghasilkan boolean true/false
    console.log(isGenap);
}
solve();
