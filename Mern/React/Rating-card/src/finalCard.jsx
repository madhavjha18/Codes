import logo from './assets/thank-you.svg'

function FinalCard({val}){
    return(
        <>
        <div className="bg-gray-900 h-100 w-105 rounded-4xl">
            <div className='flex justify-center mt-9'>
            <img src={logo} alt="logo"/>
            </div>
            <div className='flex justify-center bg-gray-800 mx-29 rounded-full my-9 '>
                <p className='text-yellow-700 text-sm p-1'>You selected {val} out of 5</p>
            </div>
            <div className='flex justify-center'>
            <p className='text-white text-2xl '>Thank You!</p>
            
            </div>
            <p className='text-gray-500 mt-4 text-center mx-8'>We appreciate you taking the time to give a rating. If you ever need more support, don't hesitate to get in touch!</p>
        </div>
        </>
    )
}

export default FinalCard