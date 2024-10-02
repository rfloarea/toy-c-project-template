#include <stdio.h>
#include "lib.c"

int main() {
  int add_result = add(40, 2);
  printf("40 + 2 = %d\n", add_result);

  int mul_result = mul(4, 2);
  printf("4 * 2 = %d\n", mul_result);
  return 0;
}
