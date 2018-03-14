#include <stdio.h>
#include<string.h>
int main(void) 
{
	char s[30];
	int n,i,m;
	scanf("%s",s);
  n=strlen(s);
	m=n/2;
  if(n%2==0)
  {
	s[m]='*';

	s[(m)-1]='*';
	}
  else
  {
	s[m]='*';
	}
	printf("\n%s",s);
	return 0;
}
