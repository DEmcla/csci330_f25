#include <cfloat>
#include <climits>
#include <cstdio>

int main() {
  int intEx = 42;
  double doubleEx = 1.465;
  char charEx = 'L';
  bool boolEx = true;
  long longEx = -9876543210;
  printf("------- C++ Type Explorer -------\n");
  printf("Fundamental Types:\n");
  printf("  int: %d (Size: %lu Bytes) (Range: %d - %d)\n", intEx, sizeof(intEx),
         INT_MIN, INT_MAX);
  printf("  double: %f (Size: %lu Bytes) (Precision: ~ %d - %d )\n", doubleEx,
         sizeof(doubleEx), 15, 17);
  printf("  char: %c (Size: %lu Byte) (ASCII: %d)\n", charEx, sizeof(charEx),
         static_cast<int>(charEx));
  if (boolEx) {
    printf("  bool: true (Size: %lu Byte) (int value: %d)\n", sizeof(boolEx),
           boolEx);
  } else {
    printf("  bool: false (Size %lu Byte) (int value: %d)\n", sizeof(boolEx),
           boolEx);
  }
  printf("  long: %ld (Size: %lu Bytes) (Range: %ld - %ld)\n", longEx,
         sizeof(longEx), LONG_MIN, LONG_MAX);
  printf("\nType Conversions:\n");
  printf("  %d ---> %f (int ---> double)\n", intEx, static_cast<double>(intEx));
  printf("   -(Precision is maintained!)\n");
  printf("  %f ---> %d (double ---> int)\n", doubleEx,
         static_cast<int>(doubleEx));
  printf("   -(Precision is lost!)\n");
  printf("  '%c' ---> %d (char ---> int)\n", charEx, static_cast<int>(charEx));
  printf("   -(ASCII value of char!)\n");
  if (boolEx) {
    printf("  true ---> 1 (bool ---> int)\n");
  } else {
    printf("  false ---> 0 (bool ---> int)\n");
  }
  printf("   -(A boolean is stored on a single bit as either a 0 or 1!)\n");
  printf("  %ld ---> %d (long ---> int)\n", longEx, static_cast<int>(longEx));
  printf(
      "   -(If a long doesn't fit within the range of an int, then information "
      "is lost!)\n");
  printf("\nImplicit Vs Explicit Conversion\n");
  printf("  Implicit:\n");
  printf("    printf(true) ---> 1 (When output bool is converted to int!)\n");
  printf(
      "    %d + %f = %f (When an int and double are added answer is always a "
      "double!)\n",
      intEx, doubleEx, intEx + doubleEx);
  printf("  Explicit:\n");
  printf("    static_cast<int>(%f) ---> %d\n", doubleEx,
         static_cast<int>(doubleEx));
  printf("    static_cast<int>(%ld) ---> %d\n", longEx,
         static_cast<int>(longEx));
  printf("\n\n------- Unit Converter! -------\n");
  double fahreheit = 32;
  double celcius = (fahreheit - 32) * (5 / 9);
  double kelvin = celcius + 273.15;
  double miles = 1;
  double feet = miles * 5280;
  double inches = feet * 12;
  double kilometers = miles * 1.60934;
  double meters = feet * 0.3048;
  double centimeters = inches * 2.54;
  printf("  Temperature:\n");
  printf("    %.*f Fahrenheit\n", 2, fahreheit);
  printf("    %.*f Ceclius ((f - 32) * (5 / 9))\n", 2, celcius);
  printf("    %.*f Kelvin (c + 273.15)\n", 2, kelvin);
  printf("  Distance:\n");
  printf("    %.*f Miles\n", 2, miles);
  printf("    %.*f Feet (mi * 5280)\n", 2, feet);
  printf("    %.*f Inches (ft * 12)\n", 2, inches);
  printf("    %.*f Kilometers (mi * 1.60934)\n", 2, kilometers);
  printf("    %.*f Meters (ft * 0.3048)\n", 2, meters);
  printf("    %.*f Centimeters (in * 2.54)\n", 2, centimeters);

  return 0;
  // weird thing to note: when doing size of it returns an unsigned long int
  // not an int, expected it to just be an int
}
