#include <stdio.h>

void main (void)
{
	char ch1[14]={0}, Sex[4]={0};
	int nBorn=0, nAge=0;
	gets(ch1);
	if(((11-((2*(ch1[0]-48)+3*(ch1[1]-48)+4*(ch1[2]-48)+5*(ch1[3]-48)+6*(ch1[4]-48)+7*(ch1[5]-48)+8*(ch1[6]-48)+9*(ch1[7]-48)+2*(ch1[8]-48)+3*(ch1[9]-48)+4*(ch1[10]-48)+5*(ch1[11]-48))%11))%10)==ch1[12]-48)//주민번호 진위 확인
	{
	{
	
		if(ch1[6]=='9' || ch1[6]=='1' || ch1[6]=='3' || ch1[6]=='5' || ch1[6]=='7')//남자와 여자를 구별
			Sex[0]='H', Sex[1]='e', Sex[2]=NULL;
		else if(ch1[6]=='0' || ch1[6]=='2' || ch1[6]=='4 '|| ch1[6]=='6' || ch1[6]=='8')
			Sex[0]='S',Sex[1]='h',Sex[2]='e';
	}
	{
		if(ch1[6]=='9' || ch1[6]=='0')//태어난 세기를 구별
			nBorn=1800+((ch1[0]-48)*10)+(ch1[1]-48);
		else if(ch1[6]=='1' || ch1[6]=='2')
			nBorn=1900+((ch1[0]-48)*10)+(ch1[1]-48);
		else if(ch1[6]=='3' || ch1[6]=='4')
			nBorn=2000+((ch1[0]-48)*10)+(ch1[1]-48);
		else if(ch1[6]=='5' || ch1[6]=='6')
			nBorn=1900+((ch1[0]-48)*10)+(ch1[1]-48);
		else if(ch1[6]=='7' || ch1[6]=='8')
			nBorn=2000+((ch1[0]-48)*10)+(ch1[1]-48);
	}
	nAge=2014-nBorn;//사람의 현재 나이(만) 계산
	printf("%s was born in %d.\n%s is %d years old.\n",Sex, nBorn, Sex, nAge);
	}
	else
	{
		printf("Wrong resident registration number.\n");
	}
}