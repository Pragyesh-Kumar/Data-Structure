// Factorial using Recursion
#include <stdio.h>
int recurFact(int n)
{
	if(n==0)
	{
		return 1;
	}		
	else
	{
		printf("\n Value: %d",n);
		return recurFact(n-1)*n;
	}
	
}
int loopFact(int n)
{
	int f=1,i;
	for(i=1;i<=n;i++)
		f=f*i;
	return f;
}
int main()
{
	int r=recurFact(5);
	printf("\n Recursion: %d ",r);
	
	int s=loopFact(5);
	printf("\n Loop: %d ",s);
		
	return 0;
}
