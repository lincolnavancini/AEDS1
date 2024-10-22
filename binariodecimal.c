#include <stdio.h>

int binarioParaDecimal(int binario){
    if (binario == 0 || binario == 1){
        return binario;
    } else {
        int ultimo_digito = binario % 10;
        return ultimo_digito + 2 * binarioParaDecimal(binario / 10);
    }
}

int main (){
    int binario;

    scanf("%d", &binario);

    printf("%d", binarioParaDecimal(binario));

    return 0;
}
