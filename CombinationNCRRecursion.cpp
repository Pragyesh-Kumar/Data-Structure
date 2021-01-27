//Combination Formula
#include <stdio.h>
int fact(int n)
{
	if(n==0)
		return 1;
	return fact(n-1)*n;
}

//Combination using factorial
int factNCR(int n,int r)
{
	int num,den;
	num=fact(n);
	den=fact(r)*fact(n-r);
	return num/den;
}

//Combination using Recursion (using Pascal's Triangle) 
int recurNCR(int n,int r)
{
	if(n==r || r==0)
		return 1;
	return recurNCR(n-1,r-1) + recurNCR(n-1,r);
}

int main()
{
	printf("Combination using factorial : %d \n", factNCR(5,3));

	printf("Combination using Recursion : %d \n", recurNCR(5,3));
	return 0;
}
