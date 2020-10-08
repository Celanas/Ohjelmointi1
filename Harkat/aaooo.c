#include <stdio.h>

int main(void){
    int i,
        j,
        k;

    for(i=1; i<9; i++){
    for(k=8; k>i; k--){
        printf(" ");
    }
    for(j=0; j<i; j++){

        printf("%d", j+i);
       }
        printf("\n");
    }
    return(0);
}
