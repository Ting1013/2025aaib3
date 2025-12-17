// Week15-2.cpp 學習計畫 Math 最後一題 Medium 題
// LeetCode 50. Pow(x, n) 算出 x 的 n 次方（n 可能是負的）
//
// 因為可能非常大 2^31 也就是 10^9 很大，不能用 for 迴圈

class Solution {
public:

    // 有個陷阱，是 n 很大，會爆掉，所以用 long long
    double myPow(double x, long long n) {

        if (x == 1) return 1;            // 邊界條件，很煩
        if (n == 0) return 1;            // 所有數的 0 次方都是 1
        if (n < 0) return myPow(1 / x, -n); // 負的，函式呼叫函式

        // 思考：x 的 n 次方可以切一半哦（快速冪）
        double half = myPow(x, n / 2);   // 一半哦（用 double 保留小數）

        if (n % 2 == 0)
            return half * half;
        else
            return half * half * x;
    }
};
