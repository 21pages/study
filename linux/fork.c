#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	pid_t ret;
	printf("xxxxxxxxxxxxxx\n");
	// 2 return values
	ret=fork();
	//success:pid from parent & 0 from child
	//fail:-1 from parent
	if(ret==-1)
	{
		perror("fork");
		exit(1);
	}
	else if(ret==0)
	{
		printf("I'm child,pid:%u,ppid:%u\n",getpid(),getppid());
	}
	else
	{
		printf("I'm parent,pid:%u,ppid:%u\n",getpid(),getppid());
	}
	//2 processes running
	printf("yyyyyyyyyyyyyyyyyyy\n");

	return 0;
}
