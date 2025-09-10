///Week01-4b.cpp ///使用C++

#include <iostream>///使用C++
using namespace std;///使用C++
int main()
 {
 	int a, b;
 	cin >> a >> b;///使用C++
 	int ans = 0;
 	for(int i=a; i<=b; i++){
 		if(i%3==0)ans += i;

 	}
 	cout << ans;///C++語言
 }
