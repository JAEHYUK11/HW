Group4 b [];
void setup() {
  size(1200, 800);
  b = new Group4[9];

  for (int  i = 0; i <3; ++ i) {
    b[i] = new Bumjin(random(0, width), random(0, height), random(4, 7), random(-6, 6), random(-6, 6));
    b[i+3] = new Hyuk(random(0, width), random(0, height), random(6, 9), random(-5, 5), random(-5, 5));
    b[i+6] = new Minseo(random(0, width), random(0, height), random(60, 100), random(-6, 6), random(-6, 6));
  }
}
void draw() {
  background(107, 160, 204);
  for (int i = 0; i <6; i++) { //<>//
    for (int j = 0; j <8-i; j++) {
      b[i].collide(b[8-j]);
    }
  } //<>//
  
  for (int i = 0; i < 9; ++i) {
    b[i].character();
    b[i].act();
  }
}
void mousePressed() { // sprint 2
  b[2].x = mouseX;
  b[2].y = mouseY;
}
