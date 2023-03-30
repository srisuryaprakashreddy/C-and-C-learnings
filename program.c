#include<stdio.h>
#include<unistd.h>
int fork()
{
	return 0;
}

int main()
	{
		int a,b,c;
		//parent process
		printf("process id %d root id %d\n",getpid(),getppid());//process
		a=fork();//system call command  1,0

		if(a==0)
		{
			printf("process1 id %d parent process %d\n",getpid(),getppid());
			b=fork();
		}
		if (b==0)
		{//process 2,process1,process2,process 3
			printf("process2 id %d parent process %d\n",getpid(),getppid());
			c=fork();
		}
		if(a==0 && b==0 && c==0)
		{
			printf("process3 id %d parent process %d\n",getpid(),getppid());
		}
		return 0;
	}

