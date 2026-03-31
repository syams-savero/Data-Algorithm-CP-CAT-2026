const fs = require('fs');
const input = fs.readFileSync(0, 'utf8').trim().split(/\s+/);
let cur = 0;
function next() { return input[cur++]; }

function solve() {
    let a = Number(next());
    let b = Number(next());
    // Contoh: Penjumlahan desimal dengan presisi
    console.log((a + b).toFixed(2));
}
solve();
