//Problem B

#include <stdio.h>

int main() {

float euro, ex, peso;

printf("Enter an amount in euro: ");
scanf("%f", &euro);
printf("Enter the exchange rate of euro to peso: ");
scanf("%f", &ex);

peso = euro * ex;

printf("%.2f euro/s with exchange rate %.2f is %.2f pesos.\n", euro, ex, peso);

return 0;

}