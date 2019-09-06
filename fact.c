#include<stdio.h>

int factorial(int a)
{
 if(a==0)
	return 1;
 else
 	return a*factorial(a-1);
}


int main()
{
	int n,res;
	printf("enter a number:\n");
	scanf("%d",&n);
	res=factorial(n);
	printf("factorial:%d\n",res);
	return 0;
}
