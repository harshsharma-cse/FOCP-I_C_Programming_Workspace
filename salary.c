#include<stdio.h>
int main(){

    int final_salary,basic_salary,allowance,bonus;
    printf("Enter your basic salary :");
    scanf("%d",&basic_salary);
    printf("Enter allowances :");
    scanf("%d",&allowance);
    printf("Enter bonus :");
    scanf("%d",&bonus);
    final_salary=(basic_salary+allowance+bonus);
    printf("Final Salary : %d",final_salary);
    
    return 0;


}