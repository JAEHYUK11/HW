#include <iostream>
#include <fstream>
#include "LoLCha.h"
using namespace std;
int main() {
	LoL *akali = new LoL(5, 10, 2, 3, -5, 0.1, 10);
	LoL* amumu = new LoL(7, 100, -3.5, 4, 100, 10, 15);
	LoL* annie = new LoL(12, 17, 0.01, 0.2, 1.5, 0.08, 20);
	LoL* ashe = new LoL(10, 20, 4.2, -5.3, 2.1, 0.2, 5);

	akali->fileopen("akali2.dat");
  
	amumu->fileopen("amumu2.dat");

	annie->fileopen("annie2.dat");

	ashe->fileopen("ashe2.dat");

	akali->~LoL();
	amumu->~LoL();
	annie->~LoL();
	ashe->~LoL();
	int aa, bb, cc;
	float dd, ee, ff, gg;
	int* a;
	float* b;
	a = new int[8];
	b = new float[10];
	ifstream yy("akali2.dat", ios::binary | ios::in);
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
	return 12;
}
