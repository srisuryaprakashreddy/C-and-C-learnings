
#include<stdio.h>
int main()
{
	int a[10],n,item,i,pos,flag=0,beg=0,end,mid;
	printf("enter the no of elements on the array");
	scanf("%d",&n);
	
for (i=0;i<n;i++)
{
scanf("%d",&a[i]);	
}
printf("enter the element  u want to search:");
scanf("%d",item);
beg=0;
end=n-1;
while(beg<=end)
{
	mid=(beg+end)/2;
	if(a[mid]==item)
	{
		flag =1;
		pos=mid+1;
		break;
	}
	else if(a[mid]>item)
	{
		end=mid-1;
	 } 
	 else if(a[mid]<item)
	 {
	 	beg=mid+1;
	 }
	 
}

if(beg>end &&flag==0)
{
	printf("your item is not present in the data ");
	
}
else
{
	printf("your item location =%d",pos);
}
return 0;
}
