///Week01-4b.cpp ///�ϥ�C++

#include <iostream>///�ϥ�C++
using namespace std;///�ϥ�C++
int main()
 {
 	int a, b;
 	cin >> a >> b;///�ϥ�C++
 	int ans = 0;
 	for(int i=a; i<=b; i++){
 		if(i%3==0)ans += i;

 	}
 	cout << ans;///C++�y��
 }
