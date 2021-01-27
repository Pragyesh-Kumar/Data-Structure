//Linear Recursion
#include <stdio.h>
int fun(int n)
{
	if(n<10)
	{
		printf("Before: %d\n",n);
		fun(n+1);
		printf("After: %d\n",n);
	}
}
int main()
{
	int r;
	r=fun(5);
	printf("Final: %d\n",r);
	return 0;
}
