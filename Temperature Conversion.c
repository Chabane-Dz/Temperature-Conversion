#include<stdio.h>

int main(){
    int C , F ;
    printf("Enter temperature in Celsius : ");
    scanf("%d",&C);
    F = (C * 9 / 5) + 32 ;
    printf("Temperature in Fahrenheit = %d ",F);

    return 0 ;
}