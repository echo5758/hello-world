#include<stdio.h>
#include<Windows.h>
#include<conio.h>
int T_LCM(int a, int b);
int main()
{
	int a,b;
    {
		printf("Please input  a,  b");
		scanf(" %d %d", &a, &b);
		if ( T_LCM(a, b)==1)
		printf("the two numbers are ����\n");
		else
		printf("the two numbers are ������\n");
	}
	system("pause");
	return 0;
}
int T_LCM( int a,int b)          //շת����� 
{
	if (a % b == 0 || b % a == 0)
	{
		if (a >= b)
			return b;
		else
			return a;
	}

	else if (a >= b)
	{
			T_LCM(b, a % b);
		
	}
	else
	{
			T_LCM(a, b % a);
		
	}
}
