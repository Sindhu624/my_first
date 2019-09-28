#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc,char *argv[])
{
	if(argc!=2)
	{
		fprintf(stderr,"Must enter one argument (an integer)\n");
		return 1;
	}
	int n=atoi(argv[1]);
	int i;
sleep(30);
	for(i=1;i<=n;i++)
		fork();
	fflush(0);

			
	fprintf(stderr,"PID=%ld,PPID=%ld\n",(long)getpid(),(long)getppid());
	while(1);
	return 0;
}
