#include<stdio.h>

main(){
	int x=3,y;
	x=y--;
	printf("%d%d",x,y);
   // value of x should be 2 and the value of y should be 2 beacause of here the program giues us output on the basis of priority of the operater and assignment 
   //operator has higher priorty than of post decreament operator
}
