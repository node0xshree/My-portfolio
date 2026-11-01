let btn=document.querySelector("button");
 let img =document.querySelector("img");

btn.addEventListener('dblclick',() =>{
   img.setAttribute(
     "src",
     "https://images.unsplash.com/photo-1793238223473-186d181b7500?w=400&auto=format&fit=crop&q=60&ixlib=rb-4.1.0&ixid=NHwxMjA3fDA%3D"
);

   
});
console.log("outer");