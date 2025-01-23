//write a c program to check whether odd or even
#include<stdio.h>
#include<conio.h>
int main(){
    int a;
    printf("enter the number: ");
    scanf("%d",&a);
    if(a%2==0){
        printf("even: %d",a);
    }
    else{
        printf("odd");
    }
return 0;
}