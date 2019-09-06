#include<stdio.h>

int main()
{
	int i,a;
	printf("enter the number:");
	scanf("%d",&i);
	for(a=0;a<=10;a++)
	{
		printf("%d*%d=%d\n",i,a,i*a);
	}
	return 0;
}
