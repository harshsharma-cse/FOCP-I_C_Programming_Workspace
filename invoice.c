#include <stdio.h>
int main(){

    char product_id[10];int product_price;int quantity;float discount_percentage;
    int Subtotal;float disc_amt;float final_amt;
    printf("Enter product id : ");
    scanf("%s",&product_id);
    printf("Enter product price : ");
    scanf("%d",&product_price);
    printf("Enter quantity : ");
    scanf("%d",&quantity);
    printf("Enter discount percentage : ");
    scanf("%f",&discount_percentage);
    Subtotal=product_price*quantity;
    disc_amt=(Subtotal*discount_percentage)/100.0;
    final_amt=Subtotal-disc_amt;
    printf("The Product ID is : %s\n",product_id);
    printf("Sub Total is : %d\n",Subtotal);
    printf("Discount amount is : %f\n",disc_amt);
    printf("Final payable amount is : %f\n",final_amt);

    return 0;

}