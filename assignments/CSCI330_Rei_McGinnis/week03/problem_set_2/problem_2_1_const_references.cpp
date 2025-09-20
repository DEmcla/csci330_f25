#include <cstdio>

struct Student {
  char name[50];
  int age;
  double gpa;

  void display_student() const {
    printf("Student Name: %s\nStudent Age: %d\nStudent GPA: %.1f\n", name, age,
           gpa);
  }
  bool is_honor_student() const { return (gpa >= 3.5); }
};

// TODO: Write a function 'display_student' that takes a const Student reference
// and prints the student's information

// TODO: Write a function 'is_honor_student' that takes a const Student
// reference and returns true if GPA >= 3.5

int main() {
  Student alice = {"Alice Johnson", 20, 3.8};
  alice.display_student();
  if (alice.is_honor_student()) {
    printf("They are an honors student!\n");
  } else {
    printf("They are not an honors student.\n");
  }
  // TODO: Call both functions with alice

  return 0;
}