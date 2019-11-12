#include<stdio.h>
int main()
{   int n, m;
    m=0;
	int a , b , c ,d , x ,y;
    for(x=0;x<=9;x++)
    {
    	for(y=0;y<=9;y++)
    	{	
	       for(a=0;a<=9;a++)
	        {
		       for(b=0;b<=9;b++)
	         	{
			       for(c=0;c<=9;c++)
			        {
				        for(d=0;d<=9;d++)
			         	{   	
				            n=x*100000+ y*10000+ a*1000 + b*100 + c*10 + d;
				            printf("n:%d    ",n);
				         	if(x==1)
					        {
					     	m=m+1;
								}
					        if(y==1)
					        {
					         m=m+1;
						 		}		    
					        if(a==1)
				         	{
						     m=m+1;
					         }
					
				         	if(b==1)
				         	{
					     	m=m+1;
					        }
					
					        if(c==1)
				         	{
					        	m=m+1;
				         	}
					
				             if(d==1)
					         {
					        	m=m+1;
				         	}
					
					         printf("f(n):%d \n",m);
					 
					         while(m==n && m!=1 && m!=0 )
					         {
					         	printf("the least n is %d",n);
						        goto add_code;
				             	} 
				        }
		         	}
		        }
         	}
        }
    }
	add_code:return 0;
}
