#include<stdio.h>

int main(){
	char ch;
	
	printf("following alphabets are there:\n");
	
	ch='a';
	while(ch<='z')
	{
		printf("%c\n",ch);
		ch++;
	}
	return 0;
}
