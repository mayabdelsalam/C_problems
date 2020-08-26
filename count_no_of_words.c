#include<stdio.h>

void main (void)
{
	
	char i=0, no_of_words=0;
	char s[100];
	
	printf("please enter a sentence\n");
	scanf("%[^\n]s",s);
	while(s[i]!='\0')
	{
		if(s[i]==' ')
			no_of_words++;
		i++;
	}
	no_of_words++;
	if (s[0]=='\0')
		no_of_words=0;
		
	printf("number of words are: %d\n",no_of_words);
}