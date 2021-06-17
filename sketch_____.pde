void setup(){
  size(400,200);
  textSize(40);
}
String line="Hello"; //字串
char c='9';
void draw(){          //1秒60次
  background(122,87,106);
  text(line+c+100,100,100);
  text("World:"+key,100,150);//可將字串輸出 +號越接越長
}//key 對應最後鍵盤的輸出(字母,數,符號)
