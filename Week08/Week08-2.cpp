//Week08-2.cpp

#include <iostream>
#include <cmath>  // 為了使用 pow()
using namespace std;

int main() {
    for (int a = 1; a <= 9; a++) {
        for (int b = 1; b <= 9; b++) {
            for (int c = 1; c <= 9; c++) {
                for (int d = 1; d <= 9; d++) {
                    int left = 25870 + a;
                    int right = pow(2, b) * c * d * d * 11;
                    if (left == right) {
                        cout << "a=" << a
                             << " b=" << b
                             << " c=" << c
                             << " d=" << d << "\n";
                    }
                }
            }
        }
    }
    return 0;
}
