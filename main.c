#include <stdio.h>

int main()
{
    int a, b;
    float c, vysledek;
    
    printf("Zadej cele cislo: ");
    scanf("%d", &a);
    
    printf("Zadej cele cislo: ");
    scanf("%d", &b);
    
    printf("Zadej realne cislo: ");
    scanf("%f", &c);
    
    printf("Tvoje cele cislo je: %d\n", a);
    printf("Tvoje desetinne cislo je: %5.2f\n", c);
    
    vysledek = (float) a/ (float) b;

    printf("Vydelene cislo je: %5.2f\n", vysledek);
    printf("Semilogaritmicky tvar vysledku je: %e\n", vysledek);
    
    printf("Hexadecimalni A: %i\n", a);
    printf("Oktadecimalni A: %o\n", a);
    
    return 0;
}
