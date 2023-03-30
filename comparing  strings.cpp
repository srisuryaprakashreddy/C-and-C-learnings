#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,c,d,flag=0;
	char a[50],b[50];
	gets(a);
	gets(b);
	c=strlen(a);
	d=strlen(b); 
  if(c==d)
    {
	printf("strings can be compared\n");
    	while(a[i]!='\0'&&b[i]!='\0')
    	{
    		if(a[i]!=b[i])
    		{
    			flag=1;
    			break;
    			
			}
		//	else
		//	printf("the  %d char of strings are same",i);
    		i++;
    	}
    		if (flag==1)
    		{
    			printf("strings are not equal\n");
			}
			else
			{
				printf("strings are equall\n");
			}
			//strcpy
			//strcom
		
	
	}
	else
	{
	printf("u cannot compare the strings \n");
    }
	return 0;	
}
