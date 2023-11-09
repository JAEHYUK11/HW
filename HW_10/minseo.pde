class Minseo extends Group4 {
  Minseo() {
    super();
  }
  Minseo(float p, float q, float r,float v1, float v2) {
    super(p, q, r, v1, v2);
  }


  void character() {
    strokeWeight(8);
    circle(x, y, d * 3 / 4); // face
    arc(x - d / 4, y - d / 800 * 204, d / 80 * 6, d / 80 * 6, PI, 1.65 * PI); // ears
    arc(x + d / 4, y - d / 800 * 204, d / 80 * 6, d / 80 * 6, 1.35 * PI, 2 * PI);
    fill(255, 255, 255); // nose color
    circle(x, y + d / 800 * 15, d / 8); // nose
    fill(200, 90, 37); // tongue color
    arc(x, y + d / 800 * 65, d / 800 * 25, d / 20, 0, PI); // tongue
    noFill();
    arc(x, y + d / 800 * 120, d / 800 * 30, d / 40, 0, PI);
    line(x - d / 800 * 50, y + d / 800 * 15, x - d / 800 * 70, y);
    line(x - d / 800 * 50, y + d / 800 * 15, x - d / 800 * 70, y + d / 800 * 30);
    line(x + d / 800 * 50, y + d / 800 * 15, x + d / 800 * 70, y);
    line(x + d / 800 * 50, y + d / 800 * 15, x + d / 800 * 70, y + d / 800 * 30);
    noStroke();
    fill(0, 0, 0); // eye color
    circle(x - d / 800 * 60, y - d / 800 * 60, d / 800 * 30); // eyes
    circle(x + d / 800 * 60, y - d / 800 * 60, d / 800 * 30);
    fill(255, 70, 80, 100); // cheek color
    circle(x - d / 800 * 86, y + d / 800 * 15, d / 80 * 7); // cheeks
    fill(255);
    stroke(0);
  }
}
