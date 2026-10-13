import './Card.css'
import {User} from 'lucide-react'

function Card(props){
    const user = props.user;
    return <div className='card'>
        <div className='header'>
            <p>${user.salaryPerHour}/hr</p>
        </div>
        <div className='body'>
            <img src={user.image} alt="" />
            <h3>{user.name}</h3>
            <h6>{user.workType}</h6>
            <div className='proffesion'><User size={12} color='green'/>{user.profession}</div>
            <div className='but'>
                {
                    user.skills.map((skill,index) => (
                        <button key={index}>{skill}</button>
                    ))
                }
            </div>
            <div className='about'>
            <h6>{user.bio}</h6>
            </div>
            <div className="divider"></div>


        </div>
        <div className='footer'>
            VIEW PROFILE
        </div>
    </div>
}

export default Card