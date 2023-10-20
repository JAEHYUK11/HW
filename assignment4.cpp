#include <iostream>
#include <fstream>

using namespace std;
void mult(float*);
void square(float*);
void All();

int main() {
	All();
	return 1;
}


void All() {
	float* data;
	data = new float[9];
	data[0] = 1234;
	mult(data);
	square(data);

	ofstream xx("mybin_4.dat", ios::binary | ios::out);
	if (!xx) {
		cout << "file not write" << endl;
	}
	
	xx.write((char*)data, 36);
	xx.close();

	ifstream yy("mybin_4.dat", ios::binary | ios::in);
	if (!yy) {
		cout << "file not write" << endl;
	}
	yy.read((char*)data, 36);


	//cout
	cout << "1¹ø \n" << data[0] << endl;

	cout << "2¹ø" << endl;
	for (int i = 0; i < 5; i++) {
		cout << data[i + 1] << endl;
	}

	cout << "3¹ø" << endl;
	for (int i = 0; i < 3; i++) {
		cout << data[i + 6] << endl;
	}
	delete[] data;
	yy.close();
}

void mult(float* data) {
	for (int i = 0; i < 5; ++i) {
		data[i+1] = 1000 * (i + 1);
	}
}
void square(float* data) {

	for (int i = 0; i < 3; ++i) {
		float d;
		d = -0.5 + (0.5 * i);
		data[i+6] = pow(d, 2);
	}
}