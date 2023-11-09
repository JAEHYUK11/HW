class Bumjin extends Group4 {
  Bumjin() {
    super();
  }
  Bumjin(float p, float q, float r, float v1, float v2) {
    super(p, q, r, v1, v2);
  }

  void character() { // 개인 캐릭터 자리
    fill(255);
    strokeWeight(3);
    ellipse(x-3.5*d, y+20*d, 4*d, 12*d);//다리
    ellipse(x+3.5*d, y+20*d, 4*d, 12*d);

    ellipse(x-6.5*d, y+12*d, 10*d, 4*d);//팔
    ellipse(x+6.5*d, y+12*d, 10*d, 4*d);

    ellipse(x, y+12*d, 14*d, 20*d); // 몸통

    ellipse(x-5.5*d, y-12*d, 6*d, 14*d);//바깥귀
    ellipse(x+5.5*d, y-12*d, 6*d, 14*d);
    fill(255, 153, 153);//핑크
    ellipse(x-5.5*d, y-12*d, 3*d, 10*d);//안쪽귀
    ellipse(x+5.5*d, y-12*d, 3*d, 10*d);
    fill(255);
    circle(x, y, 23*d);//바깥얼굴
    fill(255, 255, 100);
    circle(x, y, 20*d);//안쪽얼굴
    fill(255);
    ellipse(x-4.5*d, y-2*d, 5*d, 2*d);//눈
    ellipse(x+4.5*d, y-2*d, 5*d, 2*d);
    ellipse(x, y+4*d, 7*d, 2*d);
    fill(0);
    circle(x-4.5*d, y-2.5*d, d);//눈동자
    circle(x+4.5*d, y-2.5*d, d);
    circle(x, y+1*d, 2*d);//코
    fill(255, 255, 100);
    arc(x, y+5.5*d, 7*d, 2*d, PI/4, 3*PI/4);//주름
    fill(204, 255, 255);
    arc(x-7*d, y, 1.5*d, 3*d, 0, PI);//땀
    arc(x+5*d, y+6*d, 1.5*d, 3*d, 0, PI);
    arc(x+4*d, y-6*d, 1.5*d, 3*d, 0, PI);
  }
}
