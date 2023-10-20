#include <iostream>
#include <fstream>

using namespace std;

int main() {
	int a = 1234;
	int b[5];
	float c[3];

	for (int i = 0; i < 5; ++i) {
		b[i] = 1000 * (i+1);
	}
	for (int i = 0; i < 3; ++i) {
		float d;
		d = -0.5 + (0.5 * i);
		c[i] = pow(d, 2);
	}
	ofstream xx("mybin_1.dat", ios::binary | ios::out);
	xx.write((char*)&a, 4);
	xx.write((char*)b, sizeof(int) * 5);
	xx.write((char*)c, sizeof(float) * 3);
	xx.close();
	
	ifstream yy("mybin_1.dat", ios::binary | ios::in);
	yy.read((char*)&a, 4);
	yy.read((char*)b, 20);
	yy.read((char*)c, 12);

	cout << "1¹ø \n" << a << endl;
	cout << "2¹ø" << endl;
	for (int i = 0; i < 5; i++) {
		cout <<  b[i] << endl;
	}
	cout << "3¹ø" << endl;
	for (int i = 0; i < 3; i++) {
		cout <<  c[i] << endl;
	}

	return 0;
}