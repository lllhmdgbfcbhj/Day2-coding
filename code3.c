//write a c program to find the biggest of 3 number
#include<stdio.h>
#include<conio.h>
int main(){
    int a=10;
    int b=20;
    int c=30;
    if(a>b&&a>c){
        printf("A is bigger");
    }
    else if (c>b&&a<c){
        printf("C is bigger");
    }
    else{
        printf("B is bigger");
    }
return 0;
}