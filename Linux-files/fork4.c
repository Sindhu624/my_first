#include<stdio.h>
#include<unistd.h>

int main()
{
	int i,cpid;
	static int ctr=0;
	cpid=fork();
	if (cpid==0)
	{
		//ctr=100;
		for(i=0;i<3;i++)
			printf("child counter is:%d\n",ctr++);
	}
	else
	{
		for(i=0;i<3;i++)
			printf("parent counter is:%d\n",ctr++);
	}
	return 0;
}
