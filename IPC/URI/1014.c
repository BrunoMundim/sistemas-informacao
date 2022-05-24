#include <stdio.h>
 
int main() {
    int distanciaPercorrida;
    float gastoEmLitrosDeGasolina;
    scanf("%d %f", &distanciaPercorrida, &gastoEmLitrosDeGasolina);
    printf("%.3f km/l\n", (distanciaPercorrida / gastoEmLitrosDeGasolina));
    
    return 0;
}
