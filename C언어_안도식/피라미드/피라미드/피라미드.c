#include <stdio.h>

int main(void)
{
	int i,j,num1=1;

	for (i=1; i<=5;i++)
	{
		for (j=1; j<=4+i;j++)
		{
			if (i+j<6)
			{
				printf("\t");
			}
			else if(i+j>=6)
			{
				printf("%d\t",num1);
				num1 = num1 + 1;
			}
		}
		printf("\n");
	}
}