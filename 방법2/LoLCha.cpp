#include "LoLCha.h"
LoL::~LoL() {
    delete[] f1d;
    delete[] f2d;
}

void LoL::fileopen(string ss) {
    ofstream dd;
    dd.open(ss, ios::binary | ios::out);
    dd.write((char*)&N1, sizeof(int));
    dd.write((char*)&N2, sizeof(int));
    dd.write((char*)&a, sizeof(float));
    dd.write((char*)&b, sizeof(float));
    dd.write((char*)&dx, sizeof(float));
    dd.write((char*)&m, sizeof(int));
    dd.write((char*)f1d, sizeof(int) * (N2 - N1 + 1));
    dd.write((char*)f2d, sizeof(int) * m);
    dd.close();
}

void LoL::f1() {
    f1d = new int[N2 - N1 + 1];
    for (int i = N1; i <= N2; i++) {
        f1d[i - N1] = i * (i + 1) / 2;
    }
}
void LoL::f2() {
    float x;
    x = x0;
    f2d = new float[m];
    for (int i = 0; i < m; i++, x += dx) {
        f2d[i] = a * x + b;
    }
}