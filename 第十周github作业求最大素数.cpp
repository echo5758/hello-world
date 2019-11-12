#include<stdio.h>
#include<math.h>

int main()
{   int i,j,temp,n;
    int a[5],b[5],c[120];
    int i1, i2 ,i3,i4,i5;
    int z=-1;
	scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);
    for(i1=0;i1<5;i1++)                          //得到120种全排列 
    { 
       b[0]=a[i1];
       for(i2=0;i2<5;i2++)
       {
       	if(i1!=i2)
       	{   
       	    b[1]=a[i2];
       		for(i3=0;i3<5;i3++)
       		{
       			if(i3!=i1 && i3!=i2)
       			{   
       			    b[2]=a[i3];
       			    for(i4=0;i4<5;i4++)
       			    {
       			    	if(i4!=i3 && i4!=i2 && i4!=i1)
       			    	{
       			    		b[3]=a[i4];
       			    		for(i5=0;i5<5;i5++)
       			    		{
       			    			if(i5!=i4 && i5!=i3 && i5!=i2 && i5!=i1)
       			    			{
       			    				b[4]=a[i5];	
       			    				z=z+1;
       			    				c[z]=b[0]*10000+b[1]*1000+b[2]*100+b[3]*10+b[4];
       			    			
								   }
							   }
						   }
					   }
       			    	
					   
       				
       				
				   }
			   }
		   }
	   }
       
	}
	
	for(i=0;i<120-1;i++)
	{
		for(j=1;j<120-i;j++)
		if (c[j]<c[j-1])
			{
				temp = c[j];
				c[j] = c[j-1];
				c[j-1] = temp;
			}
	}

    for(n=119;n>=0;n--)
    {  
        int end = int(sqrt(c[n]));
        int m=1,x;	
	    for (x=2;x<=end+1;x++)
      	{
		     if (c[n]%x==0 )
		    {
			     m=0;
		     }
	     }
	
      	if(m!=0 && c[n]!=1)
     	{
	        printf("这五个数组成的最大素数是%d",c[n]);
          	goto add_code;
     	}
	   
	}
	printf("ERROR");

    add_code:return 0;
}






