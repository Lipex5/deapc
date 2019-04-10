#include <stdio.h>

int main(){
    char *z;
    int *u;
    float *j;

    int num[10];
    char *zz[10];

    printf("Int: %ld, Short: %ld, Float: %ld, Long: %ld, Char: %ld, Double: %ld\n", sizeof(int), sizeof(short), sizeof(float), sizeof(long), sizeof(char), sizeof(double));
    printf("Char *z: %ld, Int *u: %ld, Float *j: %ld, Int num[10]: %ld, Char *zz[10]: %ld\n", sizeof(z), sizeof(u), sizeof(j), sizeof(num), sizeof(*zz));
    return 0;
}