let superheros=[
    {
        name:"Thor",
        age:1500,
        planet:"Asgard",
        height:"6.3"
    },
    {
        name:"Steve Rogers",
        age:100,
        planet:"Earth",
        height:"6.4"
    },
    {
        name:"Tony Stark",
        age:34,
        planet:"Earth",
        height:"5.11"
    },
];


function doSomething(event){
    let model=document.getElementsByClassName("model")[0];
    model.style.display="block";
}

function display(superarray=superheros){
    let tableData="";
    let count=1;
    superarray.forEach(function(superhero){
        let currentRow=`<tr>
        <td>${count}</td>
        <td>${superhero.name}</td>
        <td>${superhero.age}</td>
        <td>${superhero.planet}</td>
        <td>${superhero.height}</td>
        <td>
        <button onclick="remove(${count-1})">Delete</button>
        <button onclick="displayBlock(${count-1})">Update</button>
        </td>
        </tr>`;
        tableData+=currentRow;
        count+=1;
    })
    document.getElementsByClassName("tdata")[0].innerHTML=tableData;
}


function hide(){
    document.getElementsByClassName("tdata")[0].innerHTML="";
}

function addSuperhero(event){
    let superhero={};
    event.preventDefault();
    let name=document.getElementById('name').value;
    let age=document.getElementById('age').value;
    let planet=document.getElementById('planet').value;
    let height=document.getElementById('height').value;
    superhero.name=name;
    superhero.age=Number(age);
    superhero.planet=planet;
    superhero.height=height;
    superheros.push(superhero);
    display();
    document.getElementById('name').value="";
    document.getElementById('age').value="";
    document.getElementById('planet').value="";
    document.getElementById('height').value="";      
}


function searchByName(){
    event.preventDefault();
    let searchValue=document.getElementsByClassName("search-text")[0].value;
        let newData=superheros.filter(function(superhero){   
        return (superhero.name.toUpperCase().indexOf(searchValue.toUpperCase()))!=-1});
    console.log(newData);
    display(newData);
}


function remove(n){
    superheros.splice(n,1);
    display();
}

let updateIndex;

function copySuperhero(index){
    updateIndex=index;
    let superhero=superheros[index];
    document.getElementById("upname").value=superhero.name;
    document.getElementById("upage").value=superhero.age;
    document.getElementById("upplanet").value=superhero.planet;
    document.getElementById("upheight").value=superhero.height;
}

function updateSuperhero(event){
    event.preventDefault();
    let superhero=superheros[updateIndex];
    console.log(superhero);
    let name=document.getElementById("upname").value;
    let age=document.getElementById("upage").value;
    let planet=document.getElementById("upplanet").value;
    let height=document.getElementById("upheight").value;
    superhero.name=name;
    superhero.age=age;
    superhero.planet=planet;
    superhero.height=height;
    hideBlock(event);
    display();
}



//example.js

function displayBlock(index){
    let model=document.getElementsByClassName("model")[0];
    model.style.display="block";
    copySuperhero(index);
}


function hideBlock(event){
    if(event.target.className=="model"){   
    let model=document.getElementsByClassName("model")[0];
    model.style.display="none";
    }
}