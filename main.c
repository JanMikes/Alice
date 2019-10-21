#include <stdio.h>

int main()
{
    int a;
    float b;
    
    printf("Zadej cele cislo: ");
    scanf("%d", &a);
    
    printf("Zadej desetinne cislo: ");
    scanf("%f", &b);
    
    printf("Tvoje cele cislo je: %d\n", a);
    printf("Tvoje desetinne cislo je: %.2f\n", b);

    printf("Vydelene cislo je: %.2f\n", a/b);
    
    return 0;
}
