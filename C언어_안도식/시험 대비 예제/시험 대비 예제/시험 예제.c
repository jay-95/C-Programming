#include <stdio.h>

int main(void)
{
	int i=0, j=0, sum=1;
		for (i=1;i<=5;i++)
		{
			for (j=1;j<=5;j++)
			{
			printf("%d\t",sum);
		sum=sum+5;
			}
			printf("\n");
			sum=sum-24;
		}
}
