#include<stdio.h>
#include<stdlib.h>
/*int add(int a,int b,int p)
{
        return(a+b);
}
*/
void sub1(int *first, int second){
        int m=*first - second;
        printf("%d\n",m);

}
void sub2(float *first, float second){

        float m=*first - second;
        printf("%f\n",m);
 }

void sub3(int *first, float second){
        float m=*first - second;
        printf("%f\n",m);
 }

void sub4(float *first, int second){
        float m=*first - second;
        printf("%f\n",m);
 }

