const fs = require('fs');
const input = fs.readFileSync(0, 'utf8').trim().split(/\s+/);
let cur = 0;
function next() { return input[cur++]; }

function solve() {
    let n = Number(next());
    let arr = [];
    for (let i = 0; i < n; i++) {
        arr.push(next()); // Masukkin data ke wadah fleksibel
    }
    console.log("Data terakhir:", arr[arr.length - 1]);
}
solve();
