#include <stdio.h>
int main(){

    int price;
    int quantity;

    printf("Enter price :");
    scanf("%d",&price);
    printf("Enter quantity :");
    scanf("%d",&quantity);

    printf("Total Bill : %d",price*quantity);

    return 0;
}