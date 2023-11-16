#include <iostream>
#include <fstream>
#include "LoLCha.h"
using namespace std;
int main() {
	LoL akali, amumu, annie, ashe;

	akali.N1 = 5; akali.N2 = 10;
	akali.a = 2; akali.b = 3;
	akali.x0 = -5; akali.dx = 0.1;
	akali.m = 10; 

	amumu.N1 = 7;  amumu.N2 = 100;
	amumu.a = -3.5;   amumu.b = 4;
	amumu.x0 = 100; amumu.dx = 10;
	amumu.m = 15; 

	annie.N1 = 12;  annie.N2 = 17;
	annie.a = 0.01;   annie.b = 0.2;
	annie.x0 = 1.5; annie.dx = 0.08;
	annie.m = 20; 

	ashe.N1 = 10;  ashe.N2 = 20;
	ashe.a = 4.2;   ashe.b = -5.3;
	ashe.x0 = 2.1; ashe.dx = 0.2;
	ashe.m = 5; 

	akali.fileopen("akali1.dat");
	akali.f1(); akali.f2();

	amumu.fileopen("amumu1.dat");
	amumu.f1(); amumu.f2();

	annie.fileopen("annie1.dat");
	annie.f1(); annie.f2();

	ashe.fileopen("ashe1.dat");
	ashe.f1(); ashe.f2();

	int aa,bb,cc;
	float dd, ee, ff, gg;
	int* a;
	float* b;
	a = new int[8];
	b = new float[10];
    ifstream yy("akali1.dat", ios::binary | ios::in);
	yy.read((char*)&aa, sizeof(int));
	yy.read((char*)&bb, sizeof(int));
	yy.read((char*)&dd, sizeof(float));
	yy.read((char*)&ee, sizeof(int));
	yy.read((char*)&ff, sizeof(int));
	yy.read((char*)&cc, sizeof(int));
	yy.read((char*)a, sizeof(int) * 7);
	yy.read((char*)b, sizeof(float) * 10);
	cout << aa << endl;
	cout << bb << endl;
	cout << dd << endl;
	cout << ee << endl;
	cout << ff << endl;
	cout << cc << endl;
	yy.close();
	for (int i = 0; i < 6; ++i) {
		cout << a[i] << endl;
	}
	for (int i = 0; i < 9; ++i) {
		cout << b[i] << endl;
	}

	delete[] a;
	delete[] b;
	

	return 10;

}