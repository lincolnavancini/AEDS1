#include <stdio.h>

int main(){
    float p1, p2, p3, e, m, a1, a2, ada, somaNotaSemP3;

    scanf("%f %f %f %f %f %f %f", &p1, &p2, &e, &m, &a1, &a2, &ada);

    somaNotaSemP3 = (p1*2.5) + (p2*2.5)+ (e*2) + (m*1.5) + (a1*1.5) + (a2*1.5) + (ada*1);

    p3 = ((60*15) - somaNotaSemP3)/2.5;

    printf("%.2f", p3);

    return 0;
}
