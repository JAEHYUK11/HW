float [] a, b, c, catx, caty ;
float [] v = {1.5, 1.5, 1.5, 0.6};
int q = 50 ;
int w = 300;
int state = 0;  
void setup() {
  size(1300, 800);
  a = new float[78]; //벽
  b = new float[78]; //벽
  c = new float[78]; //벽
  catx = new float[5];
  caty = new float[5];
  setWall();  
  a[0] = 0;
  catx[0] = 260;
  caty[0] = 390;
  catx[1] = 450;
  caty[1] = 550;
  catx[2] = 750;
  caty[2] = 650;
  catx[3] = 950;
  caty[3] = 250;
}
void draw() {
  background(120);
  showWall();  
  if (state == 1) waitForR(); 
  else if (state ==2) clearPhrase();
  else {
    catx[0] += v[0];
    caty[0] -= v[0];
    caty[1] += v[1];
    caty[2] += v[2];
    catx[3] += 3*v[3];
    caty[3] += v[3];
    if (catx[0] > 390 || catx[0] <260) v[0]= -v[0];
    if (caty[1] > 670 || caty[1] < 520) v[1] = -v[1];
    if (caty[2] > 670 || caty[2] < 520) v[2] = -v[2];
    if (caty[3] > 330 || caty[3] < 250) v[3] = -v[3];

    cat(catx[0], caty[0], 1);
    cat(catx[1], caty[1], 1);
    cat(catx[2], caty[2], 1);
    cat(catx[3], caty[3], 1);

    kero(q, w, 3);
    collide();
    collide2();
    collide3();
    collide4();
    clear();
  }
}
void keyPressed() {
  if (key == 'a') q -= 10;
  else if (key == 'd') q += 10;
  else if (key == 'w') w -= 10;
  else if (key == 's') w += 10;
  else if (key == 'r') {  // suh
    q=50;
    w=300;
    state = 0;
  } 
}
void collide() {
  for (int i = 0; i < 78; ++i) {
    float dx=a[i]-q;
    float dy=b[i]-w;
    float dis=sqrt(dx*dx+dy*dy);
    if (dis<62) { 
      state = 1;
      break;
    }
  }
}
void collide2() {
  for (int i = 0; i < 78; ++i) {
    float dx=a[i]-q;
    float dy=b[i]-w;
    float dis=sqrt(dx*dx+dy*dy);
    float dis2=sqrt(dx*dx);
    if (dis<80 && dis2<80 && dis2>55) {  
      state = 1;
      break;
    }
  }
}
void collide3() {
  for (int i = 0; i < 4; ++i) {
    float dx=catx[i]-q;
    float dy=caty[i]-w;
    float dis=sqrt(dx*dx+dy*dy);
    float dis2=sqrt(dx*dx);
    if (dis<60 && dis2<60 && dis2>55) {  
      state = 1;
      break;
    }
  }
}
void collide4() {
  for (int i = 0; i < 4; ++i) {
    float dx=catx[i]-q;
    float dy=caty[i]-w;
    float dis=sqrt(dx*dx+dy*dy);
    if (dis<55) { 
      state =1;
      break;
    }
  }
}
void waitForR() {
  fill(250, 0, 0);
  textSize(250);
  text("You died", 210, 380);
  fill(0, 0, 0);
  textSize(50);
  text("press 'R' key to retry", 420, 480);
  fill(255);
}
void clearPhrase(){
    fill(0, 255, 0);
    textSize(250);
    text("Clear!", 300, 380);
    fill(255);
}

void clear() {
  if (q>1000&q<1300&w<20) {
    state = 2;
  }
}
