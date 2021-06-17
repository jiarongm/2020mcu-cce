void setup(){
  size(400,200);
  textSize(40);
}
char c='9';
String ans="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int win=0;
void draw(){
  background(188,66,179);
  text("Press:"+c,100,100);
  text("You  :"+key,100,150);
  if(c==key)win=1;
  else win=0;
  if(win==1){
    text("You Win!",100,50);
    int i=int(random(26+26));//0-52 亂數中挑一個整數i
    c=ans.charAt(i);//找出ans字串中的第i個字母
  }
}
