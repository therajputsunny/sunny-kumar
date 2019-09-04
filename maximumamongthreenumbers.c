#include<stdio.h.>
int main()
{
	int x,y,z;
		printf("enter the three numbers:");
		scanf("%d%d%d",&x,&y,&z);
		
		if(x>y&&x>z){
			printf("%d is greater among all ",x);
		}
		if(y>x&&y>z){
			printf("% is greater among all",y);
			
		}
		if(z>x&&z>y){
			printf("%d is greater among all",z);
			
		}
		if(x==y&&y==z&&z==x){
		
		printf("%d  %d  %d  are equal ",x,y,z);
	}
	return 0;
}
