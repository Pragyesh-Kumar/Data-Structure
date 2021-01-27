//Tower of Hanoi
#include <stdio.h>
void TOH(int n,int A,int B,int C)
{
	if(n>0)
	{
		TOH(n-1,A,C,B);
		printf("Move disk from Tower %d to Tower %d\n",A,C);
		TOH(n-1,B,A,C);
	}
}
int main()
{
	int numDisk = 3;
	TOH(numDisk,1,2,3);
	return 0;
}
