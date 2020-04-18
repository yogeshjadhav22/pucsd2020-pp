#include<stdio.h>
#include<stdlib.h>
void per1(int *a, int c){
        int m=((*a * c)/100);
        printf("%d\n",m);

}
void per2(float *a, float c){

        float m=((*a * c)/100);
        printf("%f\n",m);
 }

void per3(int *a, float c){
        float m=((*a * c)/100);
        printf("%f\n",m);
 }

void per4(float *a, int c){
        float m=((*a * c)/100);
        printf("%f\n",m);
 }

