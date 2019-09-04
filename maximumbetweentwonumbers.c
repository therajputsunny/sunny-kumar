#include<stdio.h>
 
 int main(){
 	int x,y;
 	
 	printf("enter two numbers:");
 	scanf("%d%d",&x,&y);

 	if(x>y){
	 
 	printf("%d is maximun",x);}
 	
 	if(y>x){
 		printf(" %d is the maxmum ",y);
 		
	 }
	 if(x==y){
	 
	 printf("%d and %d is equal",x,y); 
 }
 	
 	return 0;
 }
