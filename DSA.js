const h4 = document.getElementById("h4");
const searchBtn =  document.getElementById('searchBtn')

searchBtn.addEventListener('click',() =>
{
  let input= document.getElementById("input").ariaValueMax;

  if(input !==""){
    let regExp = new RegExp(input,'gi')
    package.innerHTML = p.textContent.replace(regExp ,"<mark>$& </mark>")
  }
})