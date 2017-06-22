#include <stdlib.h>
#include <stdio.h>

int main()
{
	const char* name="ABD";
	char* ret;
	ret=getenv(name);
	if(ret==NULL)
	{
		printf("%s环境变量不存在\n",name);
	}
	else
	{
		printf("%s\n",ret);
	}

	return 0;
}
