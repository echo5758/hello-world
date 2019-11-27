#include<stdio.h>

int PND(int b)     // 函数：质数的判定 
{
	int i,x=0;
	for(i=2;i<b;i++)
		{    
		  	if(b%i==0)
		  	{
		  		x=1;
		  		break;
			}
		} 
	return x;         //若为质数则返回0，否则返回1 
}

int main()
{
	int n,n1,n2;        //n它本身，各位数字的和，各位数字的平方和
	int x,x1,x2;        //x 质数判定的辅助参数 
	int j=0;            //所有超级素数的个数记录辅助参数 
	int a1,a2,a3,a4,a5;    //n的拆卸辅助参数 
	double Average=0;       //所有超级素数的平均数
	printf("100~10000 内的所有超级素数:\n");
	for(n=100;n<=10000;n++)  //遍历100-10000 
	{   
		x=PND(n);
		if(x==0)          
		{
			a1=n/10000;                //将n 拆卸 为5个整数 
			a2=(n/1000)%10;
			a3=(n/100)%10;
			a4=(n/10)%10;
			a5=n%10;
			
			n1=a1+a2+a3+a4+a5;
			x1=PND(n1);
			n2=a1*a1+a2*a2+a3*a3+a4*a4+a5*a5;
			x2=PND(n2);
			
			if(x1==0&&x2==0)           //输出超级素数 
			{
				printf("%d\n",n);
				j++;
				Average=Average+n;
			}

		}
		  
	}
	Average=Average/j;
	printf("100~10000 内的所有超级素数的个数j=%d\n",j);             //超级素数的个数 
	printf("100~10000 内的所有超级素数的平均数=%f\n",Average);       // 超级素数们的平均数  ！！注意数据的输出类型 
	return 0;
}
