#include <stdio.h>
#define N 5
int main(){
	int a[N] ,i;
	for (i=0; i<N;i++)
	  scanf("%d",&a[i]);
	int j , temp;
	for (i=0;i<N-1;i++)
	{
		for (j=1;j<N-i;j++)
		{
			if (a[j]<a[j-1])
			{
				temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
			}
		}
	}
	int m= a[4]*10000 +a[3]*1000 +a[2]*100 +a[1]*10 +a[0];
	printf ("%d",m);
	return 0;
} 
