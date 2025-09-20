#include <cstdio>

int main() {
  int original = 100;
  int original_copy = original;
  int& original_ref = original;
  printf("Original: %d\nCopy of Original: %d\nReference to Original: %d\n\n",
         original, original_copy, original_ref);
  original = 200;
  printf("Original: %d\nCopy of Original: %d\nReference to Original: %d\n\n",
         original, original_copy, original_ref);
  // TODO: Create a copy of original called 'copy_val'
  // TODO: Create a reference to original called 'ref_val'

  // TODO: Modify original to 200

  // TODO: Print all three values to show the difference

  return 0;
}