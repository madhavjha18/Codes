import { useState } from 'react'
import InitialCard from './initialCard';

function App() {

  const [card, setcard] = useState(false);

  return (
    <>
    <div className='flex justify-center items-center min-h-screen'>
      <InitialCard></InitialCard>
    </div>
    </>
  )
}

export default App
