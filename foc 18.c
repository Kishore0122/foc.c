#include<stdio.h>
int main()
{
	int n,i,sum=0;
	{
		printf("enter number of elements in a set:");
	}
	scanf("%d",&n);
	int set[n];
{	
	printf("enter set of numbers:");
}
for(i=0;i<=n;i++)
    scanf("%d",&set[i]);
    sum=sum+i;
    printf("sum of %d is %d\n",n,sum);
   return 0;
}