#include <cstdio>

int main() {
  int celsius = 25;
  int fahrenheit = (celsius * 1.8) + 32;

  printf("%d Celsius =", celsius);
  printf(" %d Fahrenheit", fahrenheit);
  return 0;
}

// using double my out put was 25.000000 Celsius = 77.000000 Fahrenheit because
// doubles go into desmal