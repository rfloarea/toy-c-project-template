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

void fizzbuzz(int n) {
  puts("Let's play fizzbuzz!");
  for (int i = 1; i <= n; i++) {
    if (i % 15 == 0) {
      puts("fizzbuzz");
    } else if (i % 3 == 0) {
      puts("fizz");
    } else if (i % 5 == 0) {
      puts("buzz");
    } else {
      printf("%d\n", i);
    }
  }
}

struct Dog {
  char name[4];
  int age;
};

void structs() {
  struct Dog lou = {"Lou", 8};
  struct Dog pal = {.name = "Pal", .age = 4};

  printf("I'm a dog! My name is %s and I'm %d years old.\n", lou.name, lou.age);
  printf("I'm a dog! My name is %s and I'm %d years old.\n", pal.name, pal.age);
}

void my_strcat(char *buffer, size_t buflen, char *a, char *b) {
  snprintf(buffer, buflen, "%s%s", a, b);
}

// utility to check for success of snprintf
char snprintf_success(int check, int buflen) {
  return check >= 0 && check < buflen;
}

void fizzbuzz_string_buff(char *buffer, size_t buflen, int upto) {
  for (int i = 1; i <= upto; i++) {
    int check = 0;
    
    if (i % 15 == 0) {
      check = snprintf(buffer, buflen, "fizzbuzz, ");
    } else if (i % 3 == 0) {
      check = snprintf(buffer, buflen, "fuzz, ");
    } else if (i % 5 == 0) {
      check = snprintf(buffer, buflen, "buzz, ");
    } else {
      check = snprintf(buffer, buflen, "%d, ", i);
    }
    
    if (!snprintf_success(check, buflen)) return;
    buffer += check;
    buflen -= check;
  }
  buffer -= 2;
  buflen -= 2;
  snprintf(buffer, buflen, ".");
}
