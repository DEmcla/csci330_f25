#include <cstdio>

void analyze_number(int num) {
  printf("Analyzing %d: ", num);
  if (num % 2 == 1) {
    printf("\nIt is odd");
  } else {
    printf("\nIt is even");
  }
  if (num == 0) {
    printf("\nIt is neither positive nor negative\n\n");
  } else if (num < 0) {
    printf("\nIt is negative\n\n");
  } else {
    printf("\nIt is positive\n\n");
  }
  // Your if-else logic here
  // Determine if positive, negative, or zero
  // Also determine if even or odd (for non-zero numbers)
}

int main() {
  // Test with various numbers
  analyze_number(10);
  analyze_number(-5);
  analyze_number(0);
  analyze_number(7);

  return 0;
}