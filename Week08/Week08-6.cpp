//Week08-6.cpp

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    cout << "叫块4计(计ぃ滦): ";
    int n;
    cin >> n;
    for (int i = 0; i < 7; i++)
    {  // 狡璸衡程 7 Ω
        vector<int> a;
        for (int i = 0; i < 4; i++)
        {
            a.push_back(n % 10);  // –计
            n = n/10 ;
        }

        // パ逼
        sort(a.begin(), a.end());

        // 程
        int M = a[3]*1000 + a[2]*100 + a[1]*10 + a[0];

        // 程
        int m = a[0]*1000 + a[1]*100 + a[2]*10 + a[3];

        n = M - m;

        printf("%d-%d=%d\n", M, m, n); // 陪ボ璸衡筁祘干04计
    }
}
