// Power Function
#include <stdio.h>
int powerRecur(int m,int n)
{
	if(n==0)
	{
		printf("\n m: %d, n: %d", m ,n);
		return 1;
	}
		
	else
	{
		printf("\n m: %d, n: %d", m ,n);
		return powerRecur(m,n-1)*m;
	}
}

int powerRecurImproved(int m,int n)
{
	if(n==0)
		return 1;
	if(n%2==0)
	{
		printf("\n m: %d, n: %d", m ,n);
		return powerRecurImproved(m*m,n/2);
	}
	else
	{
		printf("\n m: %d, n: %d", m ,n);
		return m * powerRecurImproved(m*m,(n-1)/2);
	}
	
}

int main()
{
	int r=powerRecur(10,4);
	printf("\n Power Function using Recursion: %d ",r);
	
	int s=powerRecurImproved(10,4);
	printf("\n Power Function using Recursion (Improved):%d ",s);
	return 0;
}
