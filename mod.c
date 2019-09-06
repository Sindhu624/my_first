#include<stdio.h>

int find_mod(int a,int b)
{
	return a%b;
}

int main()
{
	int res;
	res=find_mod(6,15);
	printf("the modulus is:%d\n",res);
	return 0;
}
	
