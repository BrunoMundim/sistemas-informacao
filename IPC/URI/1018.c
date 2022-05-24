#include <stdio.h>

int main()
{
    int valor;
    scanf("%d", &valor);
    int cedulas100, cedulas50, cedulas20, cedulas10, cedulas5, cedulas2, cedulas1;
    cedulas100 = cedulas50 = cedulas20 = cedulas10 = cedulas5 = cedulas2 = cedulas1 = 0;
    int total = valor;

    while (total >= 100)
    {
        cedulas100++;
        total -= 100;
    }
    while (total >= 50)
    {
        cedulas50++;
        total -= 50;
    }
    while (total >= 20)
    {
        cedulas20++;
        total -= 20;
    }
    while (total >= 10)
    {
        cedulas10++;
        total -= 10;
    }
    while (total >= 5)
    {
        cedulas5++;
        total -= 5;
    }
    while (total >= 2)
    {
        cedulas2++;
        total -= 2;
    }
    while (total >= 1)
    {
        cedulas1++;
        total -= 1;
    }
    printf("%d\n", valor);
    printf("%d nota(s) de R$ 100,00\n", cedulas100);
    printf("%d nota(s) de R$ 50,00\n", cedulas50);
    printf("%d nota(s) de R$ 20,00\n", cedulas20);
    printf("%d nota(s) de R$ 10,00\n", cedulas10);
    printf("%d nota(s) de R$ 5,00\n", cedulas5);
    printf("%d nota(s) de R$ 2,00\n", cedulas2);
    printf("%d nota(s) de R$ 1,00\n", cedulas1);

    return 0;
}