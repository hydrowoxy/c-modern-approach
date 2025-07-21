#include <stdio.h>

int main(void){
    int r;
    printf("Enter radius: ");
    scanf("%d", &r);
    float volume = (4.0f/3.0f) * 3.14159265358979f * r * r * r;
    printf("Volume: %.2f\n", volume);
    return 0;
}