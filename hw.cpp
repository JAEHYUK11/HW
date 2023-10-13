#include <iostream>
#include <fstream>

using namespace std;
void sound(int TT, string ff, int amp, int fs, ofstream& littlestar);

int main() {
    ifstream xx("Beatles-LetItBe-wav_30s.wav", ios::binary | ios::in);
    if (!xx) return 999;  // if the file is not found
    char header[44];
    // Sprint 1
    xx.read(header, 44);

    int* sampleRate = (int*)(header + 24);
    cout << "   sampleRate = " << *sampleRate << endl;
    short* n;   n = (short*)(header + 22) ;  cout << *n << endl; // numChannels
    int* fs;   fs = (int*)(header + 24);  cout << *fs << endl; // sampleRate
    int* b;   b = (int*)(header + 28);  cout << *b << endl;  //  byteRate


    // Sprint 2
    int N1 = fs[0] * 10;
    short* data;
    data = new short[N1];

    xx.read((char*)data, N1 * sizeof(short));


    ofstream yy("my.wav", ios::binary | ios::out);
    if (!yy) return 666;
    yy.write(header, 44 * sizeof(char)); // 헤더를 쓴다. 
    yy.write((char*)data, N1 * sizeof(short));    // 헤더에 이어서 10초 분량 쓴다.
    yy.close();


    // Sprint 4
    *n = 1;
    *b = n[0] * fs[0] * sizeof(short); //헤더 내용 바꾸기
    cout << "NumChannels = " << *n << endl;
    cout << "ByteRate = " << *b << endl;
    ofstream littlestar("little star.wav", ios::binary | ios::out); //
    if (!littlestar) return 666;  // 만일 파일이 열리지 않으면 프로그램을 끝낸다. 
    littlestar.write(header, 44 * sizeof(char)); // littlestar 에 수정된 헤더쓰기

    ifstream txt("lil star.txt"); // text 파일에서 정보읽기
    if (!txt) return 232;
    int len;
    int* A, *T;
    string* f;
    txt >> len; //음표 개수
    f = new string[len];
    A = new int[len];
    T = new int[len];

    for (int i = 0; i < len; ++i) {
        txt >> T[i] >> f[i] >> A[i];
        sound(T[i],f[i], A[i],fs[0],littlestar);
    }
    txt.close();
    littlestar.close();
    return 1;
}
void sound(int TT, string ff, int amp, int fs, ofstream&littlestar) {
    int f, a;
    float T;
    if (ff == "C") f = 261; //도
    else if (ff == "G") f = 392; //솔
    else if (ff == "A") f = 440; //라
    else if (ff == "F") f = 349; //파
    else if (ff == "E") f = 329; //미
    else if (ff == "D") f = 293; //레

    a = amp * 1000;


    if (TT == 4) T = 0.7;
    else if (TT == 2) T = 1.4;
    else if (TT == 8) T = 0.35;

    int N = fs * 10; // samples for 10 seconds
    float dt = 1. / fs;
    short* data;
    data = new short[N]; // allocate memory for 10 seconds mono
    const float pi = 3.141592;
    int ii = 0;
    for (float t = 0.0; t < T; t += dt, ii++) {
        data[ii] = (short)(a * sin(2.0 * pi * f * t));   // a 진폭, f 주파수, N 샘플수(1초는 fs[0] samples, 44100 또는 8000)
    }
    littlestar.write((char*)data, ii * sizeof(short));     // 헤더에 이어서 T초 분량 쓴다.

}