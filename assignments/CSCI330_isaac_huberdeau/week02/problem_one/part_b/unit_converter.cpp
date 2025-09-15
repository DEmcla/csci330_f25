#include <cstdio>

double celciusToFahrenheit(double toFahrenheit) {
  return toFahrenheit * (9 / 5) + 32;
}

int main() {
  double temperatureCelcius = 30.0;
  double miles = 3.1;
  double feet = 5280;

  double temp = celciusToFahrenheit(temperatureCelcius);
  printf("Fahrenheit: %lf", temp);
}
