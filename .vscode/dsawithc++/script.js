console.log("Promises");

//class:It is a blueprint of objects 

//objects:it is the instance of class

//oops
//Promises :- it the class of js which manages the future response

//API(Application Programming Interface) call: used fetch(personal class of js)

/* let response=fetch ('https://fakestoreapi.com/products/1'); //the url = API [It follows ] //  2 .then used
console.log(response);
response
.then((val)=>val.json())
.then((data)=> console.log(data))
.catch((error)=>{
    console.log("catch=>",error);
    
}); */

//Promise handlers-handles promises


//es5
//.then .catch(always catch a error)

//es6
//async 
// await

//JSON[Javascript object Notation]-Global language format here objects where in key values ar stored in strings.

//await works only when u apply async in your function
//Await and async don't have error handler

let getProductsData=async()=>{
    try {
    let res = await fetch('https://fakestoreapi.com/products/1');
    let data =await res.json();
    console.log(data);
       
    } catch (error) {
        console.log("error is here",error);
        
    }
};

getProductsData();