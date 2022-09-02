const express = require('express');

const app = express();

const port = 3000;

app.get('/', (req, res) => {
    res.send("Hello, World!");
})

app.listen(port, () => {
    console.log(`http://localhost:${port}`);

})

function checkWord(input, secret){

    const inputArr = Array.from(input);
    const secretArr = Array.from(secret);
    
    let res = [];
    let matches = 0;
    
    for(let i = 0; i < secretArr.length; i++) {
        res.push("_")
    }

    inputArr.forEach((el, i) => {
        if (secretArr[i] == inputArr[i]) {
            res[i] = el;
            matches++;
        }

    })
    
    let supported = inputArr.filter((el, i) => {
        return secretArr.includes(el);
    })

    console.log("Matches: ", res);

    console.log("Supported Letters: ", supported);

    if (matches == secretArr.length) {

        console.log("Match You Win!");

    } else {

        console.log("No Match You Lost!");
    }

}

checkWord("input", "secret");