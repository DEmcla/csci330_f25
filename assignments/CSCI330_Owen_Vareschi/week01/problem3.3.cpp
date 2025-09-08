#include <cstdio>

int main() {
  // TODO: Write a for loop that prints 1, 2, 3, 4, 5 (each on its own line)
  int counter = 1;

  while (counter != 5) {
    printf("%d \n", counter);

    ++counter;
  }
  return 0;
}