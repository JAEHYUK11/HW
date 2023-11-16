#pragma once
#include <fstream>
using namespace std;
class LoL {
public:
    LoL() {};
    LoL(int n1, int n2, float a1, float b1, float x, float ddx, int M) {
        N1 = n1; N2 = n2; a = a1; b = b1; x0 = x; dx = ddx; m = M;
        f1(); f2();
    }
    ~LoL();
   
    void fileopen(string);

private: 
    int N1, N2, m;
    float a, b, x0, dx;
    int* f1d;
    float* f2d;
    void f1();
    void f2();
};