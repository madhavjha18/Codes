import Card from "./components/card";
import users from "./users.jsx";
import './App.css'

const App = () => {
    return (
    <div className="container">
    {users.map(function(elem){
        return <Card key = {elem.id} user = {elem} />
    })}
    </div>)
}

export default App