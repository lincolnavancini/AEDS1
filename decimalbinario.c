#include <stdio.h>

int imprimeBinario(int n){
    if (n > 0){
        imprimeBinario(n / 2);
        printf("%d", n % 2);
    }
}

int main(){
    int n;

    scanf("%d", &n);

    if(n == 0){
        printf("0");
    } else {
        imprimeBinario(n);
    }

    return 0;
}
