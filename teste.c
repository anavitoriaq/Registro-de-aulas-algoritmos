#include<stdio.h>
#include<locale.h>
#include <math.h>
int main (){
    setlocale (LC_ALL, "portuguese");
    int n;
    printf ("Informe um valor: ");
    scanf ("%i", &n );
    printf ("O antecessor e: %i\n", n-1);
    printf ("O sucessor e: %i", n+1);
    return (0);
}
