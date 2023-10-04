#include <iostream>
using namespace std;

int main() {
    int M = 3;
    float** B;
    float a, b, c;

    B = new float* [M];
    for (int n = 0; n < M; n++) B[n] = new float[M];

    // 행렬 입력
    cout << "계산하고 싶은 3x3 행렬을 입력하세요:" << endl;
    for (int n = 0; n < M; n++) {
        for (int l = 0; l < M; l++) {
            cout << "B[" << n << "][" << l << "]: ";
            cin >> B[n][l];
        }
    }

    a = B[0][0] * (B[1][1] * B[2][2] - B[2][1] * B[1][2]);
    b = B[1][0] * (B[2][1] * B[0][2] - B[0][1] * B[2][2]);
    c = B[2][0] * (B[0][1] * B[1][2] - B[1][1] * B[0][2]);

    // 입력된 행렬 출력
    cout << "입력한 행렬:" << endl;
    for (int n = 0; n < M; n++) {
        for (int l = 0; l < M; l++) {
            cout << B[n][l] << "  ";
        }
        cout << endl;
    }

    cout << "determinant = " << a + b + c << endl;

    for (int n = 0; n < M; n++) { delete[] B[n]; }
    delete[] B;

    return 0;
}
