#include <iostream>
#include <fstream>
#include "LoLCha.h"
using namespace std;
int main() {
	LoL *akali = new LoL(5, 10, 2, 3, -5, 0.1, 10);
	LoL* amumu = new LoL(7, 100, -3.5, 4, 100, 10, 15);
	LoL* annie = new LoL(12, 17, 0.01, 0.2, 1.5, 0.08, 20);
	LoL* ashe = new LoL(10, 20, 4.2, -5.3, 2.1, 0.2, 5);

	akali->fileopen("alkali.dat");

	amumu->fileopen("amumu.dat");

	annie->fileopen("annie.dat");

	ashe->fileopen("ashe.dat");

	akali->~LoL();
	amumu->~LoL();
	annie->~LoL();
	ashe->~LoL();
	return 10;
}
