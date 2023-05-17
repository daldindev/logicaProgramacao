/* NÃO FINALIZADO! */

#include <stdio.h>
#include <math.h>

int main(){
    int i, temp, value, arrayV1[5], arrayV2[5];

    for (i = 0; i < 5; i++){
        scanf("%d", &value);
        while(value > -1 || value < 11){
            scanf("%d", &arrayV1[i]);
        }
    }

    int p = 11;
    while(p < 0 || p > 10){
        scanf("%d", &p);
    }

    for (i = 0; i < 5; i++){
        temp = pow(arrayV1[i], p);
        arrayV2[i] = temp;
        printf("%d", arrayV2[i]);
    }

    return 0;
}
