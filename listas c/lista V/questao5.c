#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    float n1 , n2;
    float dobro_p , triplo_seg;
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);
    dobro_p = 2 * n1;
    triplo_seg = 3 * n2;
    printf("O dobro do primeiro numero e: %.2f\n", dobro_p);
    printf("O triplo do segundo numero e: %2.f\n", triplo_seg);
    return(0);
}