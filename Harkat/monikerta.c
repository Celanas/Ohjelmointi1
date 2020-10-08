#include <stdio.h>

int main(void)
{
    int luku1,
        luku2;

        printf("Syota luku 1 >\n");
        scanf("%d", &luku1);

        printf("Syota luku 2 >\n");
        scanf("%d", &luku2);

        if (luku2 == 0 || luku1 == 0 ){
            printf("Luku %d ei ole luvun %d monikerta koska toinen luvuista oli 0", luku1, luku2);
        }
        else {
        int mod = luku1 % luku2;

        if (mod == 0){

            printf("Luku %d on luvun %d monikerta", luku1, luku2);
        }
        else {
            printf("luku %d ei ole luvun %d monikerta", luku1, luku2);
            }
        }
        return(0);
}
