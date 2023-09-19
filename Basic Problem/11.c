#include <stdio.h>

int main() {

  int n, i, rem = 0;
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  if (n == 0 || n == 1)
    rem = 1;

  for (i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      rem = 1;
      break;
    }
  }

  if (rem == 0)
    printf("Prime number");
  else
    printf("Not a prime number");

  return 0;
}
