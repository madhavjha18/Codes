import { useState } from 'react'
import './App.css'
function App(){
  const [count,setCount] = useState(0);
    return (<>
    <div className='container'>
    <div className='display'><h1 >Counter: {count}</h1></div>
    <div>
    <button onClick={()=>{
      setCount(count-1)
    }} className='counter'>Decriment</button>
    <button onClick={()=> {
      setCount(count+1);
    }} className='counter'>increment</button>
    </div>



    </div>
  </>)
}

export default App;
