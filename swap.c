#include<stdio.h>
int main(){

    int a,b,c;
    printf("enter a ");
    scanf("%d",&a);
    printf("enter b ");
    scanf("%d",&b);
    c=a;
    a=b;
    printf("swapped numbers are , a=%d , b=%d",a,c);
    return 0;

}