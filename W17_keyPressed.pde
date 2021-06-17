void setup(){
  size(400,200);
  textSize(40);
  
}
float x=100,y=100,vx=0,vy=0;
void draw(){
  background(188,109,164);
  fill(95,165,83);rect(x,y,50,50,20);
  x+=vx;//加速度=vx 
  y+=vy;//每秒60次，等速(順暢)
}

void keyPressed(){
  if(keyCode==LEFT)vx-=1;
  if(keyCode==RIGHT)vx+=1;
  if(keyCode==UP)vy-=1;
  if(keyCode==DOWN)vy+=1;
}
void keyReleased(){
  vx=0;
  vy=0;
}
