#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    float c, f;
    printf("Informe a temperatura em Celsius: ");
    scanf("%f", &c);
    f = (c * 1.8) + 32;
    printf("A temperatura em Fahrenheit e: %.2f\n", f);
    return(0);
}