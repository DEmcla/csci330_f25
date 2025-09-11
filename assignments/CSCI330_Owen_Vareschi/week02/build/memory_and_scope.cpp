#include <climits>
#include <cstdio>

int g_int;
double g_double;
const int g_const = 100;

int main() {
  int local_int;
  double local_double;
  const int local_const = 42;

  printf("Global int: %d\n", g_int);
  printf("Global double: %f\n", g_double);
  printf("Const global: %d\n", g_const);

  printf("Uninitialized local int (garbage): %d\n", local_int);
  printf("Uninitialized local double (garbage): %f\n", local_double);
  printf("Const local: %d\n", local_const);

  return 0;
}
