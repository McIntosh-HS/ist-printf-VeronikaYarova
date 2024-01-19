#include <stdio.h>

int main() {
  float subtotal;
  float tax;
  printf("Enter your grocery total: ");
  scanf("%f", &subtotal);
  printf("How much the tax rate is: ");
  scanf("%f", &tax);
  printf("The final total is: %.2f\n", subtotal + subtotal*tax);
  return 0;
}
