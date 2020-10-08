#include <stdio.h>

int main(void)
{
    double luku1,
           luku2,
           counter = 0,
           keskiarvo = 0;

    do {
        printf("Anna positiivisia reaalilukuja (negatiivinen luku lopettaa)>\n");
        scanf("%lf", &luku1);
        if (luku1 < 0){
        break;
        }
        luku2 +=luku1;
        counter++;
    } while (luku1 >= 0);
    if (counter == 0){
        printf("tarpeeksi lukuja ei syotetty");
    }
    else{
        keskiarvo = luku2 / counter;
        printf("Lukujen keskiarvo on %.2lf", keskiarvo);
    }
    return(0);
}
