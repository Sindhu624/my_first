#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc,char *argv[])
{
	if(argc!=2)
	{
		printf("Must enter one argument (an integer)\n");
		exit(0);
	}
	int n=atoi(argv[1]);
	int i;
	for(i=1;i<=n;i++)
		fork();
	printf("PUCIT\n");
	exit(0);
}
