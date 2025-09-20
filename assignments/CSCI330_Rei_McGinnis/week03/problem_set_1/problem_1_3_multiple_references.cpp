#include <cstdio>

int main() {
  int shared_value = 50;
  int& shared_value_ref1 = shared_value;
  int& shared_value_ref2 = shared_value;
  printf(
      "Shared Value: %d\nShared Value Reference 1: %d\nShared Value Reference "
      "2: %d\n\n",
      shared_value, shared_value_ref1, shared_value_ref2);
  shared_value_ref1 = 75;

  // TODO: Create two different references to shared_value
  // TODO: Modify shared_value through the first reference
  // TODO: Print the value using the second reference
  // TODO: Show that all three (original + 2 references) have the same value
  printf(
      "Shared Value: %d\nShared Value Reference 1: %d\nShared Value Reference "
      "2: %d\n\n",
      shared_value, shared_value_ref1, shared_value_ref2);
  return 0;
}