#include <climits>
#include <cstdio>

int main() {
  int intNum = 1;
  double doubleNum = 35.95;
  char letter = 'I';
  bool notTrue = false;
  long longNum = 10000000;  // g
  float floatNum = 12.23;

  printf("=== C++ Type System Analysis ===\n");
  printf("Fundamental Types:\n");
  printf("int %d (size: %d bytes, range: %d, %d)\n", intNum, sizeof(intNum),
         INT_MIN, INT_MAX);
  printf("double: %lf (size: %lf bytes, precision: ~15-17 digits)\n", doubleNum,
         sizeof(doubleNum));
  printf("char: %c (size: ", 'A');
}