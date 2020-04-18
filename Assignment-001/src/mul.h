#include<stdio.h>
#include<stdlib.h>
/*int add(int a,int b,int p)
{
        return(a+b);
}
*/
void mul1(int *a, int c){
        int m=*a * c;
        printf("%d\n",m);

}
void mul2(float *a, float c){

        float m=*a * c;
        printf("%f\n",m);
 }

void mul3(int *a, float c){
        float m=*a * c;
        printf("%f\n",m);
 }

void mul4(float *a, int c){
        float m=*a * c;
        printf("%f\n",m);
 }




