#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f) // defined like this instead of 5/9 because
                                   // C truncates the result when two ints are divided
                                   // So the value of 5/9 would be 0

int main(void){
    float farenheit, celsius;

    printf("Enter Farenheit temperature: ");
    scanf("%f", &farenheit);

    celsius = (farenheit - FREEZING_PT) * SCALE_FACTOR; // converts farenheit to celsius
    // compiler sees the above as celsius = (farenheit - 32.0f) * (5.0f / 9.0f);

    printf("Celsius equivalent: %.1f\n", celsius); // .1f means it'll print one decimal digit

    return 0;
}