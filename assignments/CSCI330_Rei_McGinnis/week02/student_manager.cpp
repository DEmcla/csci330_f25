#include <cstdio>

struct Student {
  char name[50];
  int student_id;
  int grades[10];
  int grade_count;
};

int main() {
  struct Student roster[3] = {{"Greg", 101, {95, 91, 93, 84, 87}, 5},
                              {"Sam", 304, {84, 91, 78, 83}, 4},
                              {"Stephen", 974, {73, 66, 78}, 3}};
  printf("=-=-=-=-= Student Gradebook =-=-=-=-=\n");
  double highestAverageNum;
  double lowestAverageNum;
  int highestAverageIndex;
  int lowestAverageIndex = -1;
  double rosterAverage;
  Student* studentPtr = &roster[0];
  for (int i = 0; i < (sizeof(roster) / 100); i++) {
    int* gradesPtr = &((*(studentPtr + i)).grades[0]);
    double gradeAvg = 0;
    printf("Student: %s (ID: %d)\n", (*(studentPtr + i)).name,
           (*(studentPtr + i)).student_id);
    printf("  Grades: (");
    for (int j = 0; j < (*(studentPtr + i)).grade_count; j++) {
      if (j != (*(studentPtr + i)).grade_count - 1) {
        printf("%d, ", *(gradesPtr + j));
      } else {
        printf("%d", *(gradesPtr + j));
      }
      gradeAvg += *(gradesPtr + j);
    }
    gradeAvg /= (*(studentPtr + i)).grade_count;
    if (gradeAvg > highestAverageNum) {
      highestAverageNum = gradeAvg;
      highestAverageIndex = i;
    }
    if (gradeAvg < lowestAverageNum || lowestAverageIndex == -1) {
      lowestAverageNum = gradeAvg;
      lowestAverageIndex = i;
    }
    rosterAverage += gradeAvg;
    printf(")\n  Average: %.*f\n", 1, gradeAvg);
  }
  rosterAverage /= (sizeof(roster) / 100);
  printf("Roster statistics: \n");
  printf("  Highest Average: %.*f (%s)\n", 1, highestAverageNum,
         (*(studentPtr + highestAverageIndex)).name);
  printf("  Lowest Average: %.*f (%s)\n", 1, lowestAverageNum,
         (*(studentPtr + lowestAverageIndex)).name);
  printf("  Roster Average: %.*f\n", 1, rosterAverage);
  return 0;
}