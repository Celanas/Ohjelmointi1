#include <stdio.h>

int main(void)
{
    int i,
        lukuarray[10],
        isonumero;

    for (i = 0; i < 10; i++) {


        printf("Anna luku >\n");
        scanf("%d", &lukuarray[i]);

    }
    isonumero = lukuarray[0];
    for (i = 1; i<10; i++) {
        if (isonumero < lukuarray[i]) {
            isonumero = lukuarray[i];
        }
    }
    printf("%d on isoin numero", isonumero);
    return(0);
}
