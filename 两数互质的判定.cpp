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
		printf("the two numbers are 互质\n");
		else
		printf("the two numbers are 不互质\n");
	}
	system("pause");
	return 0;
}
int T_LCM( int a,int b)          //辗转相除法 
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
