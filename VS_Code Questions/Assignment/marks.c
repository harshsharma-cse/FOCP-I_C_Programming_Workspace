#include <stdio.h>
int main(){

    int sub1,sub2,sub3,sub4,sub5,total;
    float percent;
    printf("enter marks for sub1 : ");
    scanf("%d",&sub1);
    printf("enter marks for sub2 : ");
    scanf("%d",&sub2);
    printf("enter marks for sub3 : ");
    scanf("%d",&sub3);
    printf("enter marks for sub4 : ");
    scanf("%d",&sub4);
    printf("enter marks for sub5 : ");  
    scanf("%d",&sub5);
    total=sub1+sub2+sub3+sub4+sub5;
    printf("total marks are %d",total);
    percent=(total/500.0)*100;
    printf("total percentage is %.2f%%",percent);
    return 0;


}


