import { useEffect } from "react";
import { useState } from "react";

function App(){
    const [time,setTime] = useState(new Date().toLocaleTimeString());

    useEffect(()=>{
       const interval = setInterval(()=>{
            setTime(new Date().toLocaleTimeString());
        },1000);

        
        return ()=> clearInterval(interval); //isline is fark nai parta just optimisation
    },[]);
    const styling = {
        
    }
    return <>
    <h1 style={{backgroundColor: "black"
        , color: "white"
        , display: "flex",
        justifyContent: "center",
        alignItems: "center",
        height: "100vh"}}>Current time: {time}</h1>
    </>
}

export default App;