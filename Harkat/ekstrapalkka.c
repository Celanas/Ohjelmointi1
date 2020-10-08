#include <stdio.h>

int main(void)
{
    double tuntipalkka,
           tunnit,
           bruttopalkka,
           veroprosentti,
           sinunpalkka,
           verot,
           ylityo;

           printf("Anna tuntipalkka euroissa >\n");
           scanf("%lf", &tuntipalkka);

           printf("Anna tyotunnit >\n");
           scanf("%lf", &tunnit);

           printf("Anna veroprosentti >\n");
           scanf("%lf", &veroprosentti);
    if(tunnit > 40){
           ylityo = tunnit - 40;
           bruttopalkka = (40 * tuntipalkka) + (ylityo * tuntipalkka * 1.5);
           verot = veroprosentti / 100 * bruttopalkka;
           sinunpalkka = bruttopalkka - verot;
    }
    else {
           bruttopalkka = tunnit * tuntipalkka;
           verot = veroprosentti / 100 * bruttopalkka;
           sinunpalkka = bruttopalkka - verot;
    }

           printf("Nettopalkkasi on %.2lf euroa josta veron osuus on %.2lf euroa", sinunpalkka, verot);

           return(0);
}
