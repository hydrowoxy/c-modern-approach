#include <stdio.h>

int main(void){
    int dollar_amount;

    printf("Enter a dollar amount: ");
    scanf("%d", &dollar_amount);

    int div_20 = dollar_amount/20;
    printf("$20 bills: %d\n", div_20);

    dollar_amount = dollar_amount - div_20*20;

    int div_10 = dollar_amount/10;
    printf("$10 bills: %d\n", div_10);

    dollar_amount = dollar_amount - div_10*10;

    int div_5 = dollar_amount/5;
    printf("$5 bills: %d\n", div_5);

    dollar_amount = dollar_amount - div_5*5;

    printf("$1 bills: %d\n", dollar_amount);

    return 0;
}