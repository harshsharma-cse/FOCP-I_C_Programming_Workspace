#include <stdio.h>
int main(){
    char name[20]="Harsh Sharma";char grade='A';float percentage=99.99;
    int age=18;
    printf("===============================\n");
    printf("\tSTUDENT CARD\n");
    printf("===============================\n");
    printf("\tName: %s\n",name);
    printf("\tGrade: %c\n",grade);
    printf("\tPercentage: %.2f%%\n",percentage);
    printf("\tAge: %d\n",age);

    return 0;
}