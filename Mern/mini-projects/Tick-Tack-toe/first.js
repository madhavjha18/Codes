const grid = document.querySelector("#grid");

let turn = "O";

let winner = [
    [0,1,2],[3,4,5],[6,7,8],
    [0,3,6],[1,4,7],[2,5,8],
    [0,4,8],[2,4,6]
];

let arr = new Array(9).fill('E');

function checkwinner(){
    for(let [index0,index1,index2] of winner){
        if(arr[index0] != 'E'){
            if(arr[index0] === arr[index1] && arr[index0] === arr[index2])
                return 1;
        }
    }

    return 0;
}
const win = document.querySelector("#declare-winner");

let counter = 0;

function printer(event){
    
    let index = event.target.id;
    const element = event.target;
    if(arr[index] === 'E'){
        if(turn === "O"){
        element.innerHTML = "O";
        turn = "X"
        counter++;
        arr[index] = 'O';
        if(checkwinner()){
            win.textContent = "Winner is : O";
            grid.removeEventListener('click',printer);
            return;
        }

        }else{
            element.innerHTML = "X";
            turn = "O";
            arr[index] = 'X';
            counter++;
            if(checkwinner()){
                win.textContent = "Winner is : X";
                grid.removeEventListener('click',printer);
                return;
            }
        }
    }
    
    if(counter == 9){
        win.textContent = "Match draw";
    }
}
grid.addEventListener('click',printer);

const reset = document.querySelector("#reset");

reset.addEventListener('click',()=>{
    const block = document.querySelectorAll(".block");
    Array.from(block).forEach((value)=>{
        value.innerHTML = "";
    })
    turn = "O";
    counter = 0;
    arr = new Array(9).fill('E');
    win.textContent = "";
    grid.addEventListener('click',printer);
    
})