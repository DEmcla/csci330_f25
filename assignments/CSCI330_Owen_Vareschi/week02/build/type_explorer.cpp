#include <climits>
#include <iostream>

int main() {
  int intTest = 42;
  int intConvert = static_cast<int>(intTest);
  double doubleTest = 3.14159;
  double doubleConvert = static_cast<double>(intTest);
  char charTest = 'A';
  int charConvert = static_cast<int>(charTest);
  bool boolTest = true;
  double total = intTest + doubleTest;
  // conversions
  int celsius = 10;
  double fahrenheit = (celsius * (9.0 / 5)) + 32;
  double kelvin = (fahrenheit - 32) * 5.0 / 9 + 273.15;
  // distance
  int miles = 1;
  double kilometers = miles * 1.609;
  double meters = kilometers * 1000;
  int feet = 10;
  double meters2 = feet / 3.281;
  double inches = meters2 * 39.37;

  printf("=== C++ Type System Analysis === \n");
  printf("Fundamental Types: \n");
  printf("int: %d (size: %zu bytes, range: %d to %d)\n", intTest, sizeof(int),
         INT_MIN, INT_MAX);
  printf("double: %.5f (size: %zu bytes, precision: ~15-17 digits)\n",
         doubleTest, sizeof(double));
  printf("char: '%c' (size: %zu byte, ASCII: %d)\n", charTest, sizeof(char),
         charTest);
  printf("bool: %s (size: %zu byte, values: 0 or 1)\n",
         boolTest ? "true" : "false", sizeof(bool));
  printf("\n");
  printf("Type Conversions: \n");
  printf("int(%d) -> double: %.6f (no loss)\n", intTest, doubleConvert);
  printf("double(%.5f) -> int: %d (precision lost!)\n", doubleTest, intConvert);
  printf("char('%c') -> int: %d (ASCII value)\n", charTest, charConvert);
  printf("\n");
  printf("Explicit vs Implicit: \n");
  printf("Implicit: %d + %.3f = %.3f (int promoted to double \n)", intTest,
         doubleTest, total);
  printf("Explicit: static_cast<int>(%.2f) = 3 \n", doubleTest);
  printf("\n");
  printf("Temperature Conversions: \n");
  printf("%d celsius -> %.1f fahrenheit -> %.2f kelvin", celsius, fahrenheit,
         kelvin);
  printf(" \n");
  printf("Distance Conversions: \n");
  printf("%d miles -> %.3f kilometers -> %.1f meters\n", miles, kilometers,
         meters);
  printf("%d feet -> %.1f meters -> %.2f inches\n", feet, meters2, inches);
  return 0;
}