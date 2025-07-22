#include <stdio.h>

int main(void){
    float base_amount;
    printf("Enter an amount: ");
    scanf("%f", &base_amount);
    float amount_with_tax = base_amount * 1.05;
    printf("With tax added: $%.2f\n", amount_with_tax);
    return 0;
}