#include <stdio.h>

int main()
{
    int a;
    float b, vysledek;
    
    printf("Zadej cele cislo: ");
    scanf("%d", &a);
    
    printf("Zadej desetinne cislo: ");
    scanf("%f", &b);
    
    printf("Tvoje cele cislo je: %d\n", a);
    printf("Tvoje desetinne cislo je: %5.2f\n", b);
    
    vysledek = a/b;

    printf("Vydelene cislo je: %5.2f\n", vysledek);
    printf("Semilogaritmicky tvar vysledku je: %e\n", vysledek);
    
    return 0;
}
