const fs = require('fs');
const input = fs.readFileSync(0, 'utf8').trim().split(/\s+/);
let cur = 0;
function next() { return input[cur++]; }

function solve() {
    let n = Number(next());
    // Hemat RAM buat Celeron N4020 lu
    let arr = new Int32Array(n); 
    for (let i = 0; i < n; i++) {
        arr[i] = Number(next());
    }
    console.log("Dukungan RAM aman. Data ke-0:", arr[0]);
}
solve();
