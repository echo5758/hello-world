#include <stdio.h>
int main() {
	int a, b, c, n ,m;  //旅行社人数n 会英语的人数a 会俄语的人数b 两样都不会的人数c 两样都会的人数m
	printf("please input n , a , b , c ");
	scanf("%d %d %d %d", &n, &a, &b, &c);
    m = (a + b + c - n);
	if(m>=0)
	printf("两样都会的人数=%d", m);
	else
	printf("数据错误，无法计算");
	return 0;
}
