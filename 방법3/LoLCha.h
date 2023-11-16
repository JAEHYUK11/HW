#pragma once
#include <fstream>
using namespace std;
class LoL {
public:
    LoL() {};
    LoL(int n1, int n2, float a1, float b1, float x, float ddx, int M, char *aa) {
        N1 = n1; N2 = n2; a = a1; b = b1; x0 = x; dx = ddx; m = M; 
        dd.open(aa, ios::binary | ios::out);
        f1(); f2(); fileopen(aa);
    }
    ~LoL();
    
    
    

private: 
    int N1, N2, m;
    float a, b, x0, dx;
    int* f1d;
    float* f2d;
    ofstream dd;
    void f1();
    void f2();
    void fileopen(string);
};