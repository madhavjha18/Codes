import { useState } from 'react'
import './App.css'
import { useEffect } from 'react';

function App(){
  const [users,setUser] = useState([]);
  const [count,setCount] = useState(30);

  useEffect(()=>{
    async function github() {
    const response = await fetch(`https://api.github.com/users?per_page=${count}`);
    const data = await response.json();

    setUser(data);
  }

  github();
  },[count]);
  

  return (<>
    <h1 className='header'>Github users: </h1>
    <div className='row'>

    <h1 style={{color : "white"}}>Number of profile: </h1 >
    <input type="number" id='header2' value={count} onChange={(e)=>{
      setCount(Number(e.target.value));
    }}/>
    
    </div>
    <div className='container'>
    {
        users.map(user=>(
        <img src={user.avatar_url} className='img' key={user.login}/>
        ))
    }
    </div>
  </>)
}

export default App;


