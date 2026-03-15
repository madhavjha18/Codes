const form = document.querySelector("#form");

form.addEventListener("submit",(e)=>{
    e.preventDefault();
    const boy = document.getElementById("boy");
    const girl = document.getElementById("girl");

    const boyval = boy.value.length;
    const girlval = girl.value.length;

    const result = Math.pow(boyval + girlval,3) % 101;

    document.querySelector("#result").textContent = `Result: ${result}%`;
    form.reset();
});