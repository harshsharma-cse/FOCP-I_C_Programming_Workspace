#include <stdio.h>
int main(){

    int a,b;
    char op;
    printf("Enter two numbers and an operator");
    scanf("%d %d %c",&a,&b,&op);

    switch (op){
        case '+':
        printf("%d",a+b);
        break;

        case '-':
        printf("%d",a-b);
        break;

        case '*':
        printf("%d",a*b);
        break;

        case '/':
            if (b==0)
            printf("Cannot divide by 0");
            else
            printf("%d",a%b);
        
        case '%':
            if (b==0)
            printf("Cannot divide by 0");
            else
            printf("%d",a/b);
        

    }

    return 0;

}