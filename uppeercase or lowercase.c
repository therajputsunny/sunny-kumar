#include<stdio.h>

int main(){
	char ch;
	printf("Ener any Character:");
	scanf("%ch",&ch);
	
	if((ch>='a')&&(ch<='z'))
	{
		printf(" %c is lower case character",ch);
	}

	return 0;
}
