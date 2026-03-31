// INPUT
const fs = require('fs');

const input = fs.readFileSync(0, 'utf8').trim().split(/\s+/);
let cur = 0;

function next() {
    return input[cur++]
}

// function
function solve() {
    let a = Number(next())
    let b = Number(next())
    let c = Number(next())  // Gunakan bigInt jika angka nya besar (lebih dari 15 digit)

    if (!isNaN(a) && !isNaN(b) && !isNaN(c)) {
        
        // OUTPUT
        let hasil = a + b + c
        console.log(hasil.toFixed(1))  // toFixed digunakan jika hasil yang diminta adalah desimal, sehingga bisa memilih berapa maks angka desimal yang akan diperlihatkan
    }
}

solve ()