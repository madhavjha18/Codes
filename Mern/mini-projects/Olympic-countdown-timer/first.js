const div = document.querySelector("#timer");

let olympicTime = new Date(2028,6,14).getTime();

setInterval(()=>{
    let currTime = Date.now();

    let timer = olympicTime - currTime;

    const day = Math.floor(timer/(1000*60*60*24));
    timer %= 1000*60*60*24;

    const hour = Math.floor(timer/(1000*60*60));
    timer %= 1000*60*60;

    const minute = Math.floor(timer/(1000*60));
    timer %= 1000*60;

    const sec = Math.floor(timer/(1000));

    div.textContent = `${day} Days : ${hour} Hours : ${minute} Minutes : ${sec} Seconds`
},1000)


