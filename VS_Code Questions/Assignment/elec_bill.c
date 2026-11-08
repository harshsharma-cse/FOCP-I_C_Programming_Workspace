#include <stdio.h>
int main(){

    int unit;int cost;
    printf("Enter units consumed : ");
    scanf("%d",&unit);
    if (unit>=0 && unit<=100){
        printf("cost : %d",2*unit);
    }
    else if (unit>=101 && unit<=200){
        printf("cost : %d",3*unit);
    }
    else if (unit>200){
        printf("cost : %d",5*unit);
    }
    else{
        printf("No units consumed");
    }

    return 0;


}