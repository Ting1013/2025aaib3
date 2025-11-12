///Week01-4a.cpp 使用C語言

#include <stdio.h> ///使用C語言

int main()
 {
 	int a, b;
 	scanf("%d %d",&a,&b);///使用C語言

 	int ans = 0;
 	for(int i=a; i<=b; i++){
 		if(i%3==0)ans += i;

 	}
 	printf("%d",ans);///使用C語言
 }
