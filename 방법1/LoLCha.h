#pragma once
#include <fstream>
using namespace std;
class LoL {
public:
    LoL() {};
    ofstream dd;
    int N1, N2, m;
    float a, b, x0, dx;
    void fileopen(string);
    void f1();
    void f2();
    
};