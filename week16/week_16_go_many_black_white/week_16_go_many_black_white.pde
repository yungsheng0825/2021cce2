void setup(){
  size(450,450);
}
int []bx=new int [100];
int []by=new int [100];
int n=0;
void draw(){
  background(#F5C919);
  for(int y=50;y<450;y+=50){
    line(0, y,450, y);
  }
  for(int x=50;x<450;x+=50){
    line(x, 0,x,450 );
  }
  for(int i=0;i<n;i++){
    if(i%2==0)  fill(0);
     else fill(255);
     ellipse(bx[i],by[i],40,40);
  }
    if(n%2==0)  fill(0);
    else fill(255);
    ellipse(mouseX,mouseY,40,40);
}
void mousePressed(){
  bx[n]=mouseX;by[n]=mouseY;
  n++;
}
