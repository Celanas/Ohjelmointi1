#include <stdio.h>

int main(void)
{
    double luku1,
           luku2,
           counter = 0,
           keskiarvo = 0;

           for(; luku1 >= 0; counter++){
                printf("Syota positiivisia reaalilukuja (negatiivinen lopettaa)>");
                scanf("%lf", &luku1);
                if (luku1 < 0){
                    break;
                }
                luku2 += luku1;
           }
    if (counter == 0){
        printf("Liian vahan reaalilukuja syotetty");
    }
    else {
        keskiarvo = luku2 / counter;
        printf("Lukujen keskiarvo on %.2lf", keskiarvo);
    }
    return(0);
}
