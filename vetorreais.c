#include <stdio.h>

int main() {
    int N, negativos = 0;
    float somaPositivos = 0;

    scanf("%d", &N);

    float numeros[N];

    for (int i = 0; i < N; i++) {
        scanf("%f", &numeros[i]);

        if (numeros[i] < 0) {
            negativos++;
        }

        else if (numeros[i] > 0) {
            somaPositivos += numeros[i];
        }
    }


    printf("%d %.1f", negativos, somaPositivos);

    return 0;
}
