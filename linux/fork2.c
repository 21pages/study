#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	pid_t ret;
	int i;
	for(i=0;i<5;i++)
	{
		ret=fork();
		if(ret==-1)
		{
			perror("fork");
		}
		else if(ret==0)
		{
			printf("i'm child %d,pid:%u,ppid:%u\n",i+1,getpid(),getppid());
			break;
		}
		else if(i==4)
		{
			sleep(1);
			printf("i'm parent,pid:%u,ppid:%u\n",getpid(),getppid());
		}
	}
	return 0;
}
