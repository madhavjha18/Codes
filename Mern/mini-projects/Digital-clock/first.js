const div = document.querySelector('#time');


// JavaScript schedules a function to be called repeatedly at the specified interval in milliseconds.
setInterval(()=>{
    let time = new Date();
    div.textContent = time.toLocaleTimeString();
},1000)