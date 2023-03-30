#include<stdio.h>
#include<unistd.h>
int main(){
	int pid1,pid2,pid3;
	printf("process id %d root id %d \n",getpid(),getppid());
	pid1=fork();
	if(pid1==0)
	{
		printf("the process1 id %d the parent id %d\n",getpid(),getppid());
		pid2=fork();
	}
	if (pid2==0)
	{
		 printf("the process2 id %d the parent id %d\n",getpid(),getppid());
                 pid3=fork();
	}
	if(pid1==0 && pid2==0 && pid3==0)
	{
		 printf("the process3 id %d the parent id %d\n",getpid(),getppid());
	}
	return 0;
}
