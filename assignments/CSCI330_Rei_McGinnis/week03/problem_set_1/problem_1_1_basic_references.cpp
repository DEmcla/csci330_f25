#include <cstdio>

int main() {
  int score = 85;
  int& score_ref = score;
  printf("Score: %d Score Reference: %d\n", score, score_ref);
  score_ref = 92;
  printf("Score: %d Score Reference: %d\n", score, score_ref);
  return 0;
}