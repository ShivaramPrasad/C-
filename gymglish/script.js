// Code goes here

function firstName(){
  var firstname = document.getElementById('firstName').value;
  
  if(firstname === ""){
    document.getElementById("firstName").style.borderColor = "#d60229";
  }
  else{
    document.getElementById('alerts').style.display = "block";
    document.getElementById('name').innerHTML = firstname;
    $('#myModal').modal('toggle');
  }
  
}

