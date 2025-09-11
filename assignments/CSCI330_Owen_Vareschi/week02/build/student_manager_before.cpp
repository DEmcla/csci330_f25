#include <cstdio>
#include <cstring>

double calculateAverage(int* grades, int count) {
  if (count == 0) return 0.0;
  int sum = 0;
  for (int i = 0; i < count; ++i) {
    sum += grades[i];
  }
  return static_cast<double>(sum) / count;
}

struct Student {
  char name[50];
  int studentId;
  int grades[10];
  int gradeCount;
};

int main() {
  Student students[2];
  double averages[2];

  strcpy(students[0].name, "Alice Johnson");
  students[0].studentId = 1001;
  students[0].gradeCount = 5;
  students[0].grades[0] = 85;
  students[0].grades[1] = 90;
  students[0].grades[2] = 80;
  students[0].grades[2] = 98;
  students[0].grades[2] = 78;

  strcpy(students[1].name, "Bob Smith");
  students[1].studentId = 102;
  students[1].gradeCount = 3;
  students[1].grades[0] = 38;
  students[1].grades[1] = 100;
  students[1].grades[2] = 89;

  Student* ptr = students;

  for (int i = 0; i < 2; ++i) {
    Student* s = students + i;
    printf("Student: %s (ID: %d)\n", s->name, s->studentId);
    printf("  Grades: [");
    for (int j = 0; j < s->gradeCount; ++j) {
      printf("%d", s->grades[j]);
      if (j < s->gradeCount - 1) printf(", ");
    }
    printf("]\n");
    averages[i] = calculateAverage(s->grades, s->gradeCount);
    printf("  Average: %.1f\n\n", averages[i]);
  }

  int highestIndex = 0;
  int lowestIndex = 0;
  double classTotal = 0.0;

  for (int i = 0; i < 2; ++i) {
    if (averages[i] > averages[highestIndex]) highestIndex = i;
    if (averages[i] < averages[lowestIndex]) lowestIndex = i;
    classTotal += averages[i];
  }

  double classAverage = classTotal / 2;

  printf("Class Statistics:\n");
  printf("  Highest Average: %s (%.1f)\n", students[highestIndex].name,
         averages[highestIndex]);
  printf("  Lowest Average: %s (%.1f)\n", students[lowestIndex].name,
         averages[lowestIndex]);
  printf("  Class Average: %.1f\n\n", classAverage);

  printf("[Memory Safety Demo]\n");
  printf("  Safe access: grades[2] = %d\n", students[0].grades[2]);
  printf("  Unsafe access: grades[10] = ");

  printf("[%d]\n", students[0].grades[10]);

  return 0;
}