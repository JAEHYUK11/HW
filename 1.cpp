#include <iostream>
using namespace std;
int main() {
	int N = 2, M = 3, NM;
	float A[2][3] = { {1,2,3},{4,5,6} }, ** B, ** C;
	B = new float* [M];
	for (int n = 0; n < M; n++) B[n] = new float[N];
	C = new float* [N];
	for (int n = 0; n < N; n++) C[n] = new float[N];
	
	B[0][0] = 1; B[0][1] = 0;
	B[1][0] = 2; B[1][1] = 2;
	B[2][0] = 0; B[2][1] = 2; 

	// C = A * B
	for (int n = 0; n < N; n++) {
		for (int l = 0; l < N; ++l) {
			for (int m = 0; m < M; m++) {
				C[n][l] += A[n][m] * B[m][l];
			}
		}
	}
	// show results
	for (int n = 0; n < N; n++) {
		for (int l = 0; l < N; l++) {
			cout << C[n][l] << "  ";
		}
		cout << endl;
	}
}
