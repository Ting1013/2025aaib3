//Week11-4a.cpp
//(SOIT107_ADVANCE_008_C_C++)

#include <iostream>
using namespace std;

int prime(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return 0; // 不是質數
    }
    return 1; // 是質數
}

int main() {
    int n;
    cin >> n;

    cout << "[" << prime(n) << "]";

    return 0;
}
