#include <stdio.h>

int main(void){
    int i,
        j,
        k;

    for(i=1; i<11; i++){
        for(k=10; k>i; k--){
            printf(" ");
        }
        for(j=0; j<i; j++){
            printf("%d", (j+i) % 10);
        }
   /*    for(j = j - 1; j>0; j--){
            printf("%d",(j+i-1) % 10);

       } */
        printf("\n");
    }
    return(0);
}
