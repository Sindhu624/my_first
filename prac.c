#include<stdio.h>

int main()
{
	char x;
	int res;
	printf("enter any lowercase letter:");
	scanf("%c",&x);
	res=x-31;
	printf("the uppercase letter:%c",res);
	
	if (res=='A'||res=='E'||res=='I'||res=='O'||res=='U')
	{
		printf("it is a vowel");
	}
	else
		printf("it is not a vowel");
	return 0;
}

