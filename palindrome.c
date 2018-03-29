#include<stdio.h>
int main(void)
{
	int n,sum=0,temp,r;
	scanf("%d",&n);
	temp=n;
	while (n!=0)
	{
	r=n%10;
	sum=sum*10+r;
	n/=10;
	}
	if(temp==sum)
	{
	printf("palindrome");
	}
	else
	{
	printf("not a palindrome");
	}
	return 0;
}
