#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int A, B, C, MAIOR;
    scanf("%d %d %d", &A, &B, &C);
    MAIOR = (A + B + abs(A - B))/2;
    if(C > MAIOR) MAIOR = C;
    printf("%d eh o maior\n", MAIOR);

    return 0;
}
