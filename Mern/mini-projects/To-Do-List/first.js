const task = document.querySelector("#task");

const add = document.querySelector("#addtask");
const parent = document.querySelector("#parent");

add.addEventListener('click',(e)=>{
    e.preventDefault();

    const text = task.value.trim();

    if(text == "") return;

    const outerdiv = document.createElement("div");

    const innerdiv = document.createElement("span");
    innerdiv.textContent = text;


    // To reset input box since we are not using form therefore we cannot do form.reset
    task.value = "";
    task.focus();

    const completebutton = document.createElement("button");
    completebutton.textContent = "Complete";

    const deletebutton = document.createElement("button");
    deletebutton.textContent = "Delete"

    outerdiv.append(innerdiv,deletebutton,completebutton);

    parent.append(outerdiv);

    deletebutton.addEventListener("click",()=>{
        outerdiv.remove();
    });

    completebutton.addEventListener("click",()=>{
        innerdiv.style.textDecoration = "line-through";
        innerdiv.style.color = "grey";
        innerdiv.style.fontStyle = "italic";
    })

})