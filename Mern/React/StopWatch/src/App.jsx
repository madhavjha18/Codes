import React from 'react';
import { useState,useRef } from 'react'

function App() {
  const [count, setCount] = useState(0);
  const intervalid = useRef(null);
  
 function handlestart(){

  if(intervalid.current !== null) return;
  intervalid.current = setInterval(() => {
    setCount(count => count + 1);
  },1000);
 }

 function handlestop(){
  clearInterval(intervalid.current);
  intervalid.current = null;
 }

 function handlereset(){
  setCount(0);
  handlestop();
 }

  return (
    <>
    <div className='flex justify-center items-center min-h-screen'>

    <div className='bg-cyan-900 text-white h-60 w-100 rounded-3xl py-12' >
        <h1 className='text-3xl flex justify-center '>
    stopwatch : {count}
    </h1>
    <div className='flex justify-between mx-15 my-7'>
        <button onClick = {handlestart} className='border rounded-4xl px-4 hover:bg-amber-600 hover:text-black'>start</button>
        <button onClick = {handlestop} className='border rounded-4xl px-4 hover:bg-amber-600 hover:text-black'>stop</button>
        <button onClick = {handlereset} className='border rounded-4xl px-4 hover:bg-amber-600 hover:text-black'>reset</button>
    </div>
    
    </div>

    </div>
    </>
  )
}

export default App
