//Week11-2.cpp
//1491. Average Salary Excluding the Minimum and Maximum Salary

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    double average(vector<int>& salary) {
        double total = 0;          // 累加總薪資
        int maxSalary = salary[0]; // 最大薪資
        int minSalary = salary[0]; // 最小薪資

        for (int i = 0; i < salary.size(); i++) {
            total += salary[i];
            if (salary[i] > maxSalary) maxSalary = salary[i];
            if (salary[i] < minSalary) minSalary = salary[i];
        }

        // 扣掉最大、最小薪資，並除以剩下的人數
        return (total - maxSalary - minSalary) / (salary.size() - 2);
    }
};
