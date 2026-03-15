
const form = document.querySelector("#form");
form.addEventListener("submit",(e)=>{
    e.preventDefault();
    const salary = document.querySelector("#income");
    const income = parseInt(salary.value);

    
    let totaltax = 0;
    if(income <= 1200000){
        totaltax = 0;
    }
    else if(income <= 1600000){
        totaltax = (income - 1200000) * 0.15;
    }
    else if(income <= 2000000){
        totaltax = (income - 1600000) * 0.20 + 60000;
    }
    else if(income <= 2400000){
        totaltax = (income - 2000000) * 0.25 + 60000 + 80000;
    }
    else{
        totaltax = (income - 2400000) * 0.30 + 60000 + 80000 + 100000;
    }

    document.querySelector("#tax").textContent = `Total tax you have to pay: ₹${totaltax}`;

    form.reset();

})
