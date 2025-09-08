#include <cstdio>

int main() {
  int score = 87;  // Try different scores

  // TODO: Convert to letter grade (A: 90+, B: 80-89, C: 70-79, D: 60-69, F:
  // <60)
  if (score >= 90) {
    printf("Your letter grad is A");
  } else if (score <= 89 && score >= 80) {
    printf("Your letter grade is B");
  } else if (score <= 79 && score >= 70) {
    printf("Your letter grade is C");
  } else if (score <= 69 && score >= 60) {
    printf("Your letter grade is D");
  } else {
    printf("Your letter grade is F");
  }
  return 0;
}