#include <stdio.h>
 
int main() {
    int tempo, velocidade;
    float distancia;
    scanf("%d %d", &tempo, &velocidade);
    distancia = tempo * velocidade;
    printf("%.3f", distancia / 12);
    
    return 0;
}