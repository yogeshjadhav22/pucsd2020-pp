#include<stdio.h>
#include<stdlib.h>
/*int add(int a,int b,int p)
{
        return(a+b);
}
*/
void diva1(int *a, int c){
	if(*a%c==0)
	{
        	int m=*a / c;
		printf("%d\n",m);
	}
	else
	{
		float m=*a/(float)c;
		printf("%f\n",m);
	}
	
}
void diva2(float *a, float c){

        float m=*a / c;
        printf("%g\n",m);
 }

void diva3(int *a, float c){
        float m=*a / c;
        printf("%f\n",m);
 }

void diva4(float *a, int c){
        float m=*a / c;
        printf("%f\n",m);
 }

