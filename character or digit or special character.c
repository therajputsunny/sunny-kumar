#include<stdio.h>

int main(){
	char ch;
	
	printf("enter digit or special character or character:");
	scanf("%ch",&ch);
	if(((ch>='a')&&(ch<='z'))||((ch>='A')&&(ch>='Z')))
	{
		printf("%c is character",ch);
	}
	else if((ch>='0')&&(ch<='9'))
	{
		printf("%c is digit",ch);
	}
	else{
		printf("%c is special character",ch);
	}
	return 0;
}
