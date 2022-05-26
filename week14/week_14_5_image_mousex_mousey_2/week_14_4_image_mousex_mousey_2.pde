PImage img ,img2 ;
void  setup(){
  size(300,600);
  img = loadImage("1.jpg.png");
  img2 = loadImage("2.png");
}
int a=0;
void draw(){
  background(225);
  imageMode(CENTER);
  image(img,mouseX,mouseY);
  if(mousePressed){
    image(img2,mouseX,mouseY-a);
    a++;
  }
}
