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
