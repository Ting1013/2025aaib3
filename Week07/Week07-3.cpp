// week07-3.cpp LeetCode 厩策璸礶 Simulation 材1肈
// 682. Baseball Game 璸衡翴计

# include <iostream>
# include <vector>
# include <string>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;  // ノㄓ纗だ计癘魁

        for (string op : operations) { // 硋弄–巨
            if (op == "C") {
                // 埃程だ计
                a.pop_back();
            } else if (op == "D") {
                // 盢程だ计2
                a.push_back(a.back() * 2);
            } else if (op == "+") {
                // 盢程ㄢだ计癬ㄓ程
                int temp1 = a.back(); a.pop_back();
                int temp2 = a.back();
                a.push_back(temp1);
                a.push_back(temp1 + temp2);
            } else {
                // 盢﹃锣Θ俱计
                a.push_back(stoi(op));
            }
        }

        // 璸衡羆だ
        int ans = 0;
        for (int now : a) ans += now;
        return ans;
    }
};
