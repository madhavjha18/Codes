import { useState } from 'react';
import star from './assets/icon-star.svg'
import FinalCard from './finalCard';

const rating = [
    { id: 1, val: 1 },
    { id: 2, val: 2 },
    { id: 3, val: 3 },
    { id: 4, val: 4 },
    { id: 5, val: 5 }
];

function InitialCard(){

    const [selectedRating, setSelectedRating] = useState(0);
    const [submited, setSubmited] = useState(false);

    return (
    <>
    { !submited ? (
    <div className="bg-gray-900 h-100 w-105 rounded-4xl">
        <div className='m-8 rounded-full h-10 w-10 bg-gray-800'>
        <img src={star} alt="star" className='h-10 w-10 p-3'/>
        </div>

        <div className='m-8'>
            <p className='text-white text-2xl'>How did we do?</p>
            <p className='text-gray-500 mt-4'>Please let us know how we did with your support request. All feedback is appreciated to help us improve our offering!</p>
        </div>
        <div className="flex justify-around mx-3">
            {rating.map((item) => (
                <button key={item.id}
                    onClick={() => setSelectedRating(item.val)} className={`flex justify-center items-center rounded-full h-10 w-10 ${selectedRating === item.val ? 'bg-white text-black' : 'bg-gray-800 text-gray-500 hover:bg-amber-700 hover:text-black'}`} >
                    {item.val}
                </button>
            ))}
        </div>
        <div className='flex justify-center mt-10'>
        <button className='bg-amber-700 px-40 py-1.5 rounded-full hover:bg-white' onClick={()=>{
            if(selectedRating !== 0){
                setSubmited(true);
            }
        }}>Submit</button>

        </div>
    </div>
    ) : <FinalCard val = {selectedRating} ></FinalCard>
    }
    </>
    )
}

export default InitialCard