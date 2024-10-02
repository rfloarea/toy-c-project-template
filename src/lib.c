int add(int a, int b) {
  return a + b;
}

int mul(int a, int b) {
  return a * b;
}

int fib(int n) {
  if (n <= 1) {
    return n;
  }
  return fib(n - 1) + fib(n - 2);
}

void looping() {
  puts("Counting up to 10 from 0 using a while loop");
  int i = 0;
  while (i <= 10) {
    printf("%d\n", i);
    i++;
  }
  puts("Counting down to 0 from 10 using a for loop");
  for (int n = 10; n >= 0; n--) {
    printf("%d\n", n);
  }
}