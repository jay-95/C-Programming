#include <stdio.h>
#include <string.h>

int main(void)
{
	char ch[32];
	int i,size;
	gets(ch);
	size = strlen(ch);
	for (i=0; i<=size; i++)
	{
		if(ch[i]>='a' && ch[i]<='z')
			ch[i]-=32;
		else if(ch[i]>='A' && ch[i]<='Z')
			ch[i]+=32;

	}
	
	puts(ch);
}