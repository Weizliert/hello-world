#include <stdio.h>
#include <math.h>
int main(void){
float x,y,z;

	printf("���������ε�һ���߳�:");
    scanf("%f",&x) ;
	printf("���������ε�һ���߳�:");
    scanf("%f",&y) ;
	printf("���������ε�һ���߳�:");
    scanf("%f",&z) ;
	float p=(x+y+z)/2;
    float h=p*(p-x)*(p-y)*(p-z);
    float m;
    m=sqrt(h);
	printf("%f",m); 
	return 0;
} 
