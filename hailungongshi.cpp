#include <stdio.h>
#include <math.h>
int main(void){
float x,y,z;

	printf("输入三角形的一条边长:");
    scanf("%f",&x) ;
	printf("输入三角形的一条边长:");
    scanf("%f",&y) ;
	printf("输入三角形的一条边长:");
    scanf("%f",&z) ;
	float p=(x+y+z)/2;
    float h=p*(p-x)*(p-y)*(p-z);
    float m;
    m=sqrt(h);
	printf("%f",m); 
	return 0;
} 
