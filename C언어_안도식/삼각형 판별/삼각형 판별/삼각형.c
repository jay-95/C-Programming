#include <stdio.h>
#include <math.h>

int main (void)
{
	float num1;
	float num2;
	float num3;
	float S;
	float T;
	scanf("%f %f %f",&num1,&num2,&num3);
	S=(num1+num2+num3)/2;
	T=sqrt(S*(S-num1)*(S-num2)*(S-num3));
	
	if (((num1+num2)>num3) && ((num2+num3)>num1) && ((num1+num3)>num2))
		printf("%.1f\n", T);
	else
		printf("triangle cannot be formed!\n");

}
