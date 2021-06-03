function setup(){
  createCanvas(400,200);
}
function draw(){
  let s=second();
  if(s%2==0){
    background(120,66,133);
 }
  else {
    background(58,66,192);
  }
}
