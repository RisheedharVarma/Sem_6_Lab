/*
Question:
Write a C Program to Pass Arguments as Call by Value
*/


#include<stdio.h>
int formal(int a){
    a=a*2;
    return a;
}
int main(){
    int b;
    scanf("%d",&b);
    printf("F(Formal Parameter) = %d\n",formal(b));
    printf("A(Actual Parameter) = %d",b);
    
}