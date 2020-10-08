#include <stdio.h>

int main(void)
{
    double tuntipalkka,
           tunnit,
           bruttopalkka,
           veroprosentti,
           sinunpalkka,
           verot;

           printf("Anna tuntipalkka euroissa >\n");
           scanf("%lf", &tuntipalkka);

           printf("Anna tyotunnit >\n");
           scanf("%lf", &tunnit);

           printf("Anna veroprosentti >\n");
           scanf("%lf", &veroprosentti);

           bruttopalkka = tunnit * tuntipalkka;
           verot = veroprosentti / 100 * bruttopalkka;
           sinunpalkka = bruttopalkka - verot;

           printf("Nettopalkkasi on %.2lf euroa josta veron osuus on %.2lf euroa", sinunpalkka, verot);

           return(0);
}
