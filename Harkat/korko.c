#include <stdio.h>

int main(void)
{
    double kokonaiskorko,
           laina,
           korko,
           korkoprosentti,
           lainapaivatosa,
           lainapaivat;

           printf("anna korkoprosentti >\n");
           scanf("%lf", &korkoprosentti);

           printf("anna lainan maara >\n");
           scanf("%lf", &laina);

           printf("anna lainapaivien maara >\n");
           scanf("%lf", &lainapaivat);

           korko = korkoprosentti / 100 ;
           lainapaivatosa = lainapaivat / 365 ;
           kokonaiskorko = laina * korko * lainapaivatosa;

           printf("Lainapaaoman %.2lf euroa korko %.0lf paivalta korkoprosentilla %.2lf on yhteensa %.2lf euroa", laina, lainapaivat, korkoprosentti, kokonaiskorko);

           return(0);
}
