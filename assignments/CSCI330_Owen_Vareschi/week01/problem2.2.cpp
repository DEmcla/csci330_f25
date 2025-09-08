#include <cstdio>

// TODO: Write the square function here
int square(int x) {
  x *= x;
  return x;
}

int main() {
  int num = 7;
  int result = square(num);
  printf("%d squared is %d\n", num, result);
  return 0;
}