#include <stdio.h>

int main(){
    int N;

    scanf("%d", &N);

    int v[N];
    int maior, posicao;

    for(int i = 0; i < N; i++){
        scanf("%d", &v[i]);
    }

    maior = v[0];
    posicao = 0;

    for(int i = 1; i < N; i++){
        if(v[i] >= maior){
            maior = v[i];
            posicao = i;
        }
    }

    printf("%d %d", maior, posicao);

    return 0;
}
