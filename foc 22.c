#include<stdio.h>
int main()
{
	int sum,i,n;
	printf("enter a number o print series:\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	if(i%2==0)
	sum=sum+i^i;
	printf("sum is %d\n",sum);
	return 0;
}