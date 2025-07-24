#include <stdio.h>

int main(void){
    int a1, a2;

    printf("a1: ");
    scanf("%d", &a1);
    printf("a1: %d", a1);

    printf("\na2: ");
    scanf(" %d", &a2);
    printf("a2: %d\n", a2);

    return 0;
}