#include <stdio.h>

void main(void)

{
	int i = 0, sum = 0, num1 = 0;

	printf("숫자를 입력하시오 : ");
	scanf("%d", &num1);

	for (i=1; i <= num1; ++i)
	{
		sum = sum + i;
	}

	printf("총 합 : %d\n",sum);

}
	