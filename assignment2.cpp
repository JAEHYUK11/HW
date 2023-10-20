#include <iostream>
#include <fstream>

using namespace std;
void mult(int*);
void square(float*);
int main() {
	int a = 1234;
	int b[5];
	float c[3];

	mult(b);
	square(c);

	ofstream xx("mybin_2.dat", ios::binary | ios::out);
	xx.write((char*)&a, 4);
	xx.write((char*)b, sizeof(int) * 5);
	xx.write((char*)c, sizeof(float) * 3);
	xx.close();

	ifstream yy("mybin_2.dat", ios::binary | ios::in);
	yy.read((char*)&a, 4);
	yy.read((char*)b, 20);
	yy.read((char*)c, 12);
	yy.close();
	cout << "1¹ø \n" << a << endl;
	cout << "2¹ø" << endl;
	for (int i = 0; i < 5; i++) {
		cout << b[i] << endl;
	}
	cout << "3¹ø" << endl;
	for (int i = 0; i < 3; i++) {
		cout << c[i] << endl;
	}

	return 0;


}

void mult(int* b) {
	for (int i = 0; i < 5; ++i) {
		b[i] = 1000 * (i + 1);
	}
}
void square(float* c){

	for (int i = 0; i < 3; ++i) {
		float d;
		d = -0.5 + (0.5 * i);
		c[i] = pow(d, 2);
	}
}
