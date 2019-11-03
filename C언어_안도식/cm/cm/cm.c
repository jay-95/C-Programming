#include <stdio.h>

int main (void)
{
	int x, y;
	printf("키를 입력하시오:");
	scanf("%d",&x);
	y=x/2.54;
	printf("%dcm는 %d피트 %f인치입니다.\n",x,y/12,x/2.54-(y/12)*12);
	return 0;
}