#include <stdio.h>
#include "lib.c"

int main() {
  int add_result = add(40, 2);
  printf("40 + 2 = %d\n", add_result);

  int mul_result = mul(4, 2);
  printf("4 * 2 = %d\n", mul_result);

  int fib_result = fib(10);
  printf("The 10th number in fib = %d\n", fib_result);

  looping();

  fizzbuzz(20);

  structs();

  // this creates a fizzbuzz to a string and prints
  char buffer[1000] = {0};
  fizzbuzz_string_buff(buffer, sizeof(buffer), 30);
  printf("fizzbuzz: %s\n", buffer);

  return 0;
}
