#include<stdio.h>

int main(){
	
	char ch;
	printf("Enter any character:");
	scanf("%ch",&ch);
	
	if(((ch>='a')&&(ch<='z'))||((ch>='A')&&(ch<='Z')))
	{
		printf("%c is alphabet",ch);
	}
		else
	{
		printf("character is not alphabet");
	}
	return 0;
}
