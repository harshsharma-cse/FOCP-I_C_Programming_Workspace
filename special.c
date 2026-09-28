#include<stdio.h>
int main(){

    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    if (n%2==0 && n%5==0){
        printf("Special");
    }
    else if (n%2==0 && n%5!=0){
        printf("Even");
    }
    else if (n%5==0 && n%2!=0){
        printf("Odd");
    }
    else
    printf("Odd/Other");

    return 0;
}