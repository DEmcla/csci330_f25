#include <cstdio>

int main() {
  int original = 100;

  // TODO: Create a copy of original called 'copy_val'
  int copy_val = original;
  // TODO: Create a reference to original called 'ref_val'
  int &ref_val = original;
  // TODO: Modify original to 200
  original = 200;
  // TODO: Print all three values to show the difference
  printf("Original: %d, Copy %d, Referance %d ", original, copy_val, ref_val);
  return 0;
}