#include <cstdio>
#include <cstring>

double calculate_average(int* grades, size_t count) {
  if (!grades || count == 0) return 0.0;

  int* p = grades;
  int* end = grades + count;
  int sum = 0;

  while (p < end) {
    sum += *p;
    ++p;
  }
  return static_cast<double>(sum) / count;
}

int sum_with_indices(int arr[], size_t n) {
  int sum = 0;
  for (size_t i = 0; i < n; ++i) {
    sum += arr[i];
  }
  return sum;
}

int sum_with_pointers(int* arr, size_t n) {
  int sum = 0;
  int* p = arr;
  int* end = arr + n;
  while (p < end) {
    sum += *p;
    ++p;
  }
  return sum;
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
  students[0].grades[3] = 98;
  students[0].grades[4] = 78;

  strcpy(students[1].name, "Bob Smith");
  students[1].studentId = 1002;
  students[1].gradeCount = 3;
  students[1].grades[0] = 38;
  students[1].grades[1] = 100;
  students[1].grades[2] = 89;

  for (int i = 0; i < 2; ++i) {
    Student* s = students + i;
    printf("Student: %s (ID: %d)\n", s->name, s->studentId);
    averages[i] = calculate_average(s->grades, s->gradeCount);
    printf("  Average: %.1f\n\n", averages[i]);
  }

  int sample[] = {1, 2, 3, 4, 5};
  size_t n = sizeof(sample) / sizeof(sample[0]);
  printf("Sum with indices: %d\n", sum_with_indices(sample, n));
  printf("Sum with pointers: %d\n", sum_with_pointers(sample, n));

  return 0;
}
