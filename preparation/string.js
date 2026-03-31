const fs = require('fs');
const input = fs.readFileSync(0, 'utf8').trim().split(/\s+/);
let cur = 0;
function next() { return input[cur++]; }

function solve() {
    let nama = next();
    let pesan = next();
    console.log(`Halo ${nama}, pesan lu: ${pesan}`);
}
solve();
