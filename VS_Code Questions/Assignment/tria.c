#include <stdio.h>
int main(){

    int a,b,c;
    printf("Enter angle a : ");
    scanf("%d",&a);
    printf("Enter angle b : ");
    scanf("%d",&b);
    printf("Enter angle c : ");
    scanf("%d",&c);

    if ((a+b+c)!=180 || a==0 || b==0 || c==0 || a<0 || b<0 || c<0){
        printf("Invalid Triangle");
    }
    else if (a<90 && b<90 && c<90){
        printf("Acute Triangle");
    }
    else if (a==90 || b==90 || c==90){
        printf("Right Triangle");
    }
    else 
    printf("Obtuse Triangle");

    return 0;

}