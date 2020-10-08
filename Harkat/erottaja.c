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
    printf("%d ", arr[1]);                  // olisin varmaan voinut tehdä for loopin ja olisi ollu varmaan vähän nätimpi
    printf("%d ", arr[2]);                  // mutta olipahan ainakin tekemisen makua
    printf("%d ", arr[3]);
    printf("%d ", arr[4]);
    printf("%d ", arr[5]);


    return(0);

}
