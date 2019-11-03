#include <stdio.h>

void main(void)
{
	char ch1[10]={0}, ch2[10]={0};
	int sum1=0, sum2=0, i;
	gets(ch1);
	gets(ch2);
	for (i=0; i<10; i++)
		sum1+=ch1[i]-96;
	for (i=0; i<10; i++)
		sum2+=ch2[i]-96;
	printf("%s\n",sum1>sum2?ch1:ch2);
}
