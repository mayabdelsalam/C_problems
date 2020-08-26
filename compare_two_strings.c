#include <stdio.h>

void main (void)
{
	char * string1[50] = {0};
	char * string2[50] = {0}; 
	int flag = 0;
	int x;
	printf("please enter first string: ");
	scanf("%[^\n]s",string1);
	
	printf("\nplease enter second string: ");
	/*I used scanf("%d",&x); here because 
	when I used scanf("%[^\n]s",string2); straight away after the first scanf it did not work... intresting*/*/
	scanf("%d",&x);
	scanf("%[^\n]s",string2);
	
	for (int i =0; i<50; i++)
	{
		if(string1[i]-string2[i] != 0)
		{
			flag = 1;
			break;
		}
		
	}
	if(flag == 0)
		printf("\nthe two string are the same");
	else if(flag == 1)
		printf("\nthe two string are not the same");
	
}