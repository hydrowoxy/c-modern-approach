#include <stdio.h>

int main(void){
    int prefix, id, pub, item, check;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &prefix, &id, &pub, &item, &check);

    printf("GS1 prefix: %d\n", prefix);
    printf("Group identifier: %d\n", id);
    printf("Publisher code: %d\n", pub);
    printf("Item number: %d\n", item);
    printf("Check digit: %d\n", check);

    return 0;
}