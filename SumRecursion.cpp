//Sum of N natural numbers
#include<stdio.h>
int recurSum(int n)
{
	if(n==0)
	{
		return 0;
	}
	else
	{
		printf("\n Value: %d", n);
		return recurSum(n-1)+n;
	}
}

int loopSum(int n)
{
	int s=0,i;
	for(i=1;i<=n;i++)
		s=s+i;
	return s;
}
int main()
{
	int r=recurSum(5);
	printf("\n Sum using Recursion: %d ",r);

	int s=loopSum(5);
	printf("\n Sum using Loop: %d ",s);
	
	return 0;
}
