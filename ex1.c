#include <stdio.h>

int main(){
    int arrayLength, i;
    int arrayV1[50];
    int arrayV2[50];
    scanf("%d", &arrayLength);

    if (arrayLength < 2 || arrayLength > 50){
        printf("Erro");

        return 0;
    };

    for (i = 0; i < arrayLength; i++){
        scanf("%d", &arrayV1[i]);
    }

    for (i = 0; i < arrayLength; i++){
        arrayV2[i] = arrayV1[arrayLength -1 -i];
    }

    for (i = 0; i < arrayLength; i++){
        printf("%d ", arrayV2[i]);
    }

    return 0;
}
