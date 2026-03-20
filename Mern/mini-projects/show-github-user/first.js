const parent = document.querySelector("#parent");

    async function userdata() {
        try{
            const response = await fetch("https://api.github.com/users");
            if(!response.ok){
                throw new Error("Data not available");
            }
            const data = await response.json();
        

        for(let user of data){
            const outerdiv = document.createElement("div");
            outerdiv.classList.add("user");

            const image = document.createElement("img");
            image.src = user.avatar_url;

            const username = document.createElement("h2");
            username.textContent = user.login;

            const anchor = document.createElement('a');
            anchor.textContent = "Visit profile";
            anchor.href = user.html_url;

            outerdiv.append(image,username,anchor);
            parent.append(outerdiv);

            // outerdiv.addEventListener('click',()=>{

            // })
        }

    }
    catch(error){
        console.log("Error: ",error);
    }
}
userdata();
