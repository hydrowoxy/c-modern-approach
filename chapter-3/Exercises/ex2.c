#include <stdio.h>

int main(void){
    float x = 1.23f;
    // a.
    printf("|%-8.1e|\n",x);
    // b.
    printf("|%10.6e|\n",x);
    // c.
    printf("|%-8.3f|\n",x);
    // d.
    printf("|%6.0f|\n",x);
    // note that doing %6f above doesnt work and instead displays 6 after the dp
    return 0;
}
