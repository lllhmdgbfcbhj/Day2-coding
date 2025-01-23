//check whether the leap year exist or not
#include<stdio.h>
int main(){
    int a;
    printf("enter the number: ");
    scanf("%d",&a);
    if(a%4==0){
        if(a%100){
            if(a%400){
                printf("Leap year");
            }
        else{
            printf("Not Leap Year");
        }
        }
        else{
            printf("Leap Year");
        }

    }
    else{
        printf("NOt a leap year");
    }
return 0;
}