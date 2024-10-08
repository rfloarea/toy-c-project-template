#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "lib.c"

// Very small test helpers
int failed = 0;
#define TEST(name) void name()
#define RUN_TEST(name) printf("\n\033[1m%s\n\033[0m", #name); name()
#define ASSERT(expr) if (!(expr)) { \
  failed = 1; \
  printf("\033[0;31mFAIL: %s\n\033[0m", #expr); \
} else { \
  printf("\033[0;32mPASS: %s\n\033[0m", #expr); \
}
#define ASSERT_STR_EQ(str1, str2) ASSERT(strcmp(str1, str2) == 0)
// End of test helpers

TEST(test_add) {
  ASSERT(add(1, 2) == 3);
  ASSERT(add(0, 0) == 0);
  ASSERT(add(-1, -1) == -2);
}

TEST(test_string_assert) {
  ASSERT_STR_EQ("hello", "hello");
}

TEST(test_mul) {
  ASSERT(mul(4, 2) == 8);
  ASSERT(mul(0, 2) == 0);
  ASSERT(mul(-1, 2) == -2);
}

TEST(test_fib) {
  ASSERT(fib(5) == 5);
  ASSERT(fib(8) == 21);
  ASSERT(fib(1) == 1);
  ASSERT(fib(0) == 0);
  ASSERT(fib(-5) == -5);
}

TEST(test_concat) {
  char result[5] = {0};
  my_strcat(result, sizeof(result), "hi", "ya");
  ASSERT_STR_EQ(result, "hiya");
}

int main() {
  // Add a `RUN_TEST` line for each test function
  RUN_TEST(test_add);
  RUN_TEST(test_string_assert);
  RUN_TEST(test_mul);
  RUN_TEST(test_fib);
  RUN_TEST(test_concat);
  return failed;
}
