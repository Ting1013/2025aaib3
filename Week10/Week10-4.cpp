// week10-4.cpp
// ¯x°}¬Û­¼ SLJ-Array-016 (¶i¶¥ª©)

#include <iostream>
#include <cstdio> // for printf()
using namespace std;

int main() {
    int a[10][10], b[10][10], c[10][10];
    int N;

    cin >> N; // ¿é¤J¯x°}¤j¤p

    // ¿é¤J¯x°} a
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> a[i][j];
        }
    }

    // ¿é¤J¯x°} b
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> b[i][j];
        }
    }

    // ¯x°}¬Û­¼ c = a * b
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int now = 0;
            for (int k = 0; k < N; k++) {
                now += a[i][k] * b[k][j];
            }
            printf("%3d ", now);
        }
        cout << "\n";
    }

    return 0;
}
