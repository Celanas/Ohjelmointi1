#include <stdio.h>

int main(void)
{
    double bensiini,
           keskikulutus,
           kilometrit,
           kokonaiskulutus,
           kokonaisbensa,
           kokonaiskilometrit,
           kokonaiskeski;

    while (bensiini != -1) {
           printf("Anna tankutun bensiinin maara ( -1 lopettaa ) >\n");
           scanf("%lf", &bensiini);
           if (bensiini == -1) {
           break;
           }
           printf("Anna ajetut kilometrit >\n");
           scanf("%lf", &kilometrit);



           kilometrit = kilometrit / 100;
           keskikulutus = bensiini / kilometrit;

           printf("keskikulutus talla tankkauksella on %.3lf litraa satasella\n", keskikulutus);

           kokonaisbensa = kokonaisbensa + bensiini;
           kokonaiskilometrit = kokonaiskilometrit + kilometrit;
   }
           kokonaiskeski = kokonaisbensa / kokonaiskilometrit;
           printf("Kokonaiskeskikulutus on %.3lf litraa satasella", kokonaiskeski);

           return(0);

}
