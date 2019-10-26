#include <stdio.h>
#define N 3
int main(){
    int x[N] = {5, 2, 1};
    scanf("%d %d %d", &x[0], &x[1], &x[2]);
    int i , j , temp;
    for(i=0;i<N-1;i++)
	 {
    	for (j=1;j<N-i;j++)
		{
			if(x[j]<x[j-1])
			{
				temp = x[j]; 
				x[j] = x[j-1];
				x[j-1] = temp;
			}
	    }
      
      }
    
    printf(" %d, %d, %d", x[0], x[1], x[2]);
    return 0;
}
