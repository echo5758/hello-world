#include<stdio.h>
#include<Windows.h>
#include<conio.h>
int T_GCD(int a, int b);
int T_LCM(int number_a, int number_b);
int main()
{
	int number_1, number_2,answer,c;
	while ((c =getchar()) != EOF)
	{
		printf("Please input two numbers to get their the Least Common Multiple:");
		scanf(" %d %d", &number_1, &number_2);
		answer = T_GCD(number_1, number_2);
		printf("The answer is:%d\n", answer);
		
	}
	system("pause");
	return 0;
}
int T_GCD(int a, int b)
{
	return a * b / T_LCM(a, b);
}
int T_LCM(int number_a, int number_b)
{
	if (number_a % number_b == 0 || number_b % number_a == 0)
	{
		if (number_a >= number_b)
			return number_b;
		else
			return number_a;
	}

	else if (number_a >= number_b)
	{
			T_LCM(number_b, number_a % number_b);
		
	}
	else
	{
			T_LCM(number_a, number_b % number_a);
		
	}

}
