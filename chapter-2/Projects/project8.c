#include <stdio.h>

int main(void){
    float loan, interest_rate, monthly_payment;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    float interest_rate_ann = interest_rate/100.0f/12.0f;

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    float month1 = loan - monthly_payment + (loan*interest_rate_ann);
    printf("Balance remaining after first payment: $%.2f\n", month1);
    loan = month1;

    float month2 = loan - monthly_payment + (loan*interest_rate_ann);
    printf("Balance remaining after second payment: $%.2f\n", month2);
    loan = month2;

    float month3 = loan - monthly_payment + (loan*interest_rate_ann);
    printf("Balance remaining after third payment: $%.2f\n", month3);

    return 0;
}