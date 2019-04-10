#include <stdio.h>

int main(){
    int num[] = {10, 21, 99, 52, 80};
    int *n, v1, v2;

    n = num;
    v1 = *n;
    v2 = *(n+2) - v1;
    n = n+3;

    printf("Seq: %d, %d, %d\n", v1, v2, *n);
    return 0;
}