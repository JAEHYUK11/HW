class Group4{
  Group4(){
    x = random(0, width);
    y = random(0, height);
    d = random(1,5);
    vx = random(-2, 2);
    vy = random(-2, 2);
  }
  Group4(float p, float q, float r,float v1, float v2){ 
    x = p; y= q; d=r; vx = v1; vy = v2;
  }
  float x,y,d,vx,vy;
  
  void act() { 
    x += vx;
    y += vy;
    if (x>width || x < 0) vx = -vx;
    if (y>height || y < 0) vy = -vy;
  }
  
  void collide(Group4 b) {
    float dd;
    dd = sqrt((x-b.x)*(x-b.x) + (y-b.y)*(y-b.y));
    if ( dd < (d + b.d)) {
      float tempVx = vx;
      float tempVy = vy;
      vx = -b.vx;
      vy = -b.vy;
      b.vx = -tempVx;
      b.vy = -tempVy;
    }
  }
  
  void character(){}

}
