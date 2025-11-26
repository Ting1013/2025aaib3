// Week12-2.cpp
//860. Lemonade Change

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0; // 手上的 5 與 10 元數量

        for (int b : bills) {

            if (b == 5) {
                five++;
            }

            else if (b == 10) {
                if (five == 0) return false;
                five--;
                ten++;
            }

            else { // b == 20
                // 最佳找零策略：先給 10 + 5
                if (ten > 0 && five > 0) {
                    ten--;
                    five--;
                }
                // 其次給三張 5
                else if (five >= 3) {
                    five -= 3;
                }
                else return false;
            }
        }

        return true;
    }
};
