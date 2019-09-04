#include<stdio.h>

int main(){
	int x;
	printf("enter any number:");
	scanf("%d",&x);
	
	if(x%5==0&&x%11==0){
		printf("%d is divisible by 5 and 11",x);
	}
	else
	printf("not divisible by 5 and 11");
	return 0;
}
