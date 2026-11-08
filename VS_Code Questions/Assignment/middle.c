#include<stdio.h>
int main(){

    int a,b,c;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    printf("Enter c : ");
    scanf("%d",&c);
    if (a>b && a<c || a<b && a>c){
        printf("Middle Value is : %d",a);
    }
    else if (b>a && b<c || b<a && b>c){
        printf("Middle Value is : %d",b);
    }
    else if (c>a && c<b || c<a && c>b){
        printf("Middle Value is : %d",c);
    }
    else
    printf("Either all three values are equal of two of the values are equal");

    return 0;

}