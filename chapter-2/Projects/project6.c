#include <stdio.h>

int main(void){
    float x;

    printf("Enter a value for x: ");
    scanf("%f", &x);

    float poly = ((((3*x+2)*x-5)*x-1)*x+7)*x-6;

    printf("The value of the polynomial is: %.2f\n", poly);

    return 0;
}