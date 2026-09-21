#include <stdio.h>
int main(){

    int a;int b;int c;
    float average;

    printf("Enter a :");
    scanf("%d",&a);
    printf("Enter b :");
    scanf("%d",&b);
    printf("Enter c :");
    scanf("%d",&c);
    average = (a+b+c)/3.0;
    printf("Average is : %.2f",average);

    return 0;
}