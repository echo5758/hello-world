#include <stdio.h>
int main() {
	int a, b, c, n ,m;  //����������n ��Ӣ�������a ����������b ���������������c �������������m
	printf("please input n , a , b , c ");
	scanf("%d %d %d %d", &n, &a, &b, &c);
    m = (a + b + c - n);
	if(m>=0)
	printf("�������������=%d", m);
	else
	printf("���ݴ����޷�����");
	return 0;
}
