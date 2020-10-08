#include <stdio.h>

int main(void)
{
    int koepisteet;

    printf("Syötä pisteet >\n");
    scanf("%d", &koepisteet);

    switch (koepisteet) {

    case -1...12
    printf("koenumerosi on hylatty");

    case 11...14
    printf("koenumerosi on 1");

    case 13...17
    printf("koenumerosi on 2");

    case 16...20
    printf("koenumerosi on 3");

    case 19...23
    printf("koenumerosi on 4");

    case 22...25
    printf("koenumerosi on 5");

    default:
        printf("Virheellinen pistemaara");
        break;
    }
    return(0);
}



