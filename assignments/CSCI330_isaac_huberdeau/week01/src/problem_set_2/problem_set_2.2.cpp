#include <cstdio>

// Use your functions from Problem 2.1 here
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { /* your code */ return a - b; }
int multiply(int a, int b) { /* your code */ return a * b; }
void divide(int a, int b) {
  /* your code with error checking */
  if (b == 0) {
    printf("No number is divisible by %d\n", b);
  } else {
    printf("Division: %d / %d = %f\n", a, b, a / b);
  }
}

int main() {
  int num1, num2;

  printf("Enter two integers: ");
  scanf("%d %d", &num1, &num2);

  printf("\nCalculator Results for %d and %d:\n", num1, num2);

  // Perform all operations
  printf("Addition: %d + %d = %d\n", num1, num2, add(num1, num2));
  printf("Subtraction: %d - %d = %d\n", num1, num2, subtract(num1, num2));
  printf("Multiplication: %d * %d = %d\n", num1, num2, multiply(num1, num2));
  printf("Division: ");
  divide(num1, num2);

  return 0;
}