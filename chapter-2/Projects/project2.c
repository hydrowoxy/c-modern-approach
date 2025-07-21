#include <stdio.h>

int main(void){
    int r = 10;
    float volume = (4.0f/3.0f) * 3.14159265358979f * r * r * r;
    printf("Volume: %.2f\n", volume);
    return 0;
}