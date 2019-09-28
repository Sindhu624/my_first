#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>


void myThread(void *vargp)
{
	sleep(100);
	printf("Printing threads\n");
	return NULL;
}


int main()
{
	pthread_t thread_id;
	printf("Before thread\n");
	pthread_create(&thread_id,NULL,myThread,NULL);
	pthread_join(thread_id,NULL);
	printf("After thread\n");
	exit(0);
}

