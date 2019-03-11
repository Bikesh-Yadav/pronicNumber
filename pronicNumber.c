//program for pronic number i.e. multiply of two consecutive number...3*4,11*12
#include<stdio.h>

void main()
{
	int num,i,j,mul,flag;
	printf("enter number\n",num);
	scanf("%d",&num);
	
	for(i=0,j=1;i<=num/2;i++,j++)
	{
		mul=i*j;
		flag=0;
		
		if(mul==num)
		{
			printf("%d is pronic number\n",num);
			break;
		}
		else
		{
			flag=1;
		}
	}
	
	if(flag==1)
	{
			printf("%d is not pronic number\n",num);
	}
}
