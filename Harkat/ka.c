#include <stdio.h>

int main (void){

    double luku1,
           luku2,
           counter = 0,
           lukukeski = 0;

    while(1){
        printf("Anna positiivisia reaalilukuja (negatiivinen luku lopettaa)>\n");
        scanf("%lf", &luku1);
        if (luku1 < 0) {
            break;
        }
        luku2 += luku1;
        counter++;
    }
    if(counter == 0){
        printf("Annoit liian vahan lukuja");
    }
    else {
        lukukeski = luku2 / counter;
        printf("Lukujen keskiarvo on %.2lf", lukukeski);
    }
    return(0);
}
