#include <stdio.h>

void main(void)

{
	int i = 0, sum = 0, num1 = 0;

	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf("%d", &num1);

	for (i=1; i <= num1; ++i)
	{
		sum = sum + i;
	}

	printf("�� �� : %d\n",sum);

}
	