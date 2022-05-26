PImage img ;
void setup(){
  size(500,300);
  img = loadImage("1.jpg.png");
}
void draw(){
  image(img,mouseX,mouseY);

}
