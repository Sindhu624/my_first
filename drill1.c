#include<stdio.h>

int add(int x,int y)
{
	

	if(y==0)
		return x;
	else
		return add(x^y,(x&y)<<1);
}

int main()
{
	int res;
	res=add(5,6);
	printf("answer is:%d\n",res);
	return 0;
}
