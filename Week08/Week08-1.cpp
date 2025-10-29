// week08-1.cpp
// 3370. Smallest Number With All Set Bits
#include <iostream>
using namespace std;

class Solution {
public:
    int smallestNumber(int n) {
        int N = 0;
        int temp = n;

        // 材1˙璸衡秈计ブ猭
        while (temp > 0) {
            temp /= 2;
            N++;
        }

        cout << "瞷祇瞷琌(秈)" << N << "计\n";

        // 材2˙舱场琌1N计
        int ans = 0;
        for (int i = 0; i < N; i++) {
            ans = ans * 2 + 1;
        }

        return ans;
    }
};
