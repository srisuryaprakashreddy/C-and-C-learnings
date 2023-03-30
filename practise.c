#include<stdio.h>
#include<unistd.h>

int main()
{ 
	int pid1,pid2,pid3;
	printf("the parent id is %d the root id is %d \n",getpid(),getppid());
	pid1=fork();
	 if (pid1==0)
	 {
		 printf("the process1 id is %d and process id of parentprocess  is %d \n ",getpid(),getppid());
		 pid2=fork();
	 }
	 if(pid2==0)
	 {
		  printf("the process2 id is %d and process id of parentprocess  is %d \n ",getpid(),getppid());
		  pid3=fork();
	 }
	 if(pid1==0 && pid2==0 && pid3==0)
	 {
		  printf("the process3 id is %d and process id of parentprocess  is %d \n ",getpid(),getppid());
	 }
	 return 0;
}

