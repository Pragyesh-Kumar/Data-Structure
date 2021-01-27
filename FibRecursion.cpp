// Fibonacci Series
#include <stdio.h>

// using loop
int loopFib(int n)
{
	int t0=0,t1=1,s=0,i;
	if(n<=1) 
		return n;
	for(i=2;i<=n;i++)
	{
		s=t0+t1;
		t0=t1;
		t1=s;
	}
	return s;
}
// using recursion
int recurFib(int n)
{
	if(n<=1)
		return n;
	return recurFib(n-2)+recurFib(n-1);
}

int F[10];

// using memoization
int memoFib(int n)
{
	if(n<=1)
	{
		F[n]=n;
		return n;
	}
	else
	{
		if(F[n-2]==-1)
		{
			F[n-2]=memoFib(n-2);
		}
		
		if(F[n-1]==-1)
		{
			F[n-1]=memoFib(n-1);
			F[n]=F[n-2]+F[n-1];
		}
		return F[n-2]+F[n-1];
	}
}

int main()
{
	int i;
	int num = 7;
	for(i=0;i<10;i++)
		F[i]=-1;
	
	printf("Fibonacci using Loop: %d \n",loopFib(num));
	printf("Fibonacci using Recursion: %d \n",recurFib(num));
	printf("Fibonacci using Memoization: %d \n",memoFib(num));
	return 0;
}
