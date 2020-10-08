#include <stdio.h>

int main(void)
{
    int numero,
        index;
    int arr[6];

    index = 5;
    printf("syota 5-numeroinen luku >");
    scanf("%d", &numero);

    while(numero > 0)
    {
        int mod = numero % 10;
        arr[index] = mod;

        numero = numero / 10;
        index = index - 1;
    }
    if (arr[1] == arr[5] && arr[2] == arr[4]) {

        printf("Luku on palindromi");
    }
    else {
        printf("Luku ei ole palindromi");
    }
    return(0);

}
