const form =document.querySelector("form")

form.addEventListener("submit",(e)=>{
    e.preventDefault()

    const username = form.username.value
    const password = form.password.value

    const authenticated = authentication(password)
    if(authenticated){
        window.location.href ="login.html"
    }
    else{
        alert("wrong")
    }
})