//Problem C

#include <stdio.h>

int main() {

int num1, num2, num3, num4, nume, deno;
printf("Enter 4 numbers: ");
scanf("%i", &num1);
scanf("%i", &num2);
scanf("%i", &num3);
scanf("%i", &num4);
nume = num1*num4 - num2*num3;
deno = num2*num4;

printf("%i/%i\n", nume, deno);

return 0;
}