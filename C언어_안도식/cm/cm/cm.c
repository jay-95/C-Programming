#include <stdio.h>

int main (void)
{
	int x, y;
	printf("Ű�� �Է��Ͻÿ�:");
	scanf("%d",&x);
	y=x/2.54;
	printf("%dcm�� %d��Ʈ %f��ġ�Դϴ�.\n",x,y/12,x/2.54-(y/12)*12);
	return 0;
}