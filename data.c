#include<stdio.h>

int main()
{ 
	char name[10];
	int score;
	printf("Enter the name:");
	scanf("%s",name);
	printf("rate your coolness:");
	scanf("%d",&score);
	if(score>7)
	{
		printf("hey %s,your cool",name);
	}
	else
		printf("%s,better luck next time:)",name);
	return 0;
}
		
	
































