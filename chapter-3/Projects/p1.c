#include <stdio.h>

int main(void){
    int m,d,y;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d",&m,&d,&y);
    printf("You entered the date %.4d%.2d%.2d\n", y,m,d); // .2 so it displays 02 even if the user enters 2 for mm for example

    return 0;
}