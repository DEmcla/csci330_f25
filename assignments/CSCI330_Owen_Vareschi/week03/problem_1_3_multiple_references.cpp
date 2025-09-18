// Template provided:
#include <cstdio>

int main() {
  int shared_value = 50;

  // TODO: Create two different references to shared_value
  int &ref_shared_val = shared_value;
  int &ref1_shared_val = shared_value;
  // TODO: Modify shared_value through the first reference
  ref_shared_val = 60;
  // TODO: Print the value using the second reference
  printf("Second ref: %d \n", ref1_shared_val);
  // TODO: Show that all three (original + 2 references) have the same value
  printf("Original: %d, referance one: %d, referance two: %d \n", shared_value,
         ref_shared_val, ref1_shared_val);

  return 0;
}