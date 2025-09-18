// Template provided:
#include <cstdio>

struct Student {
  char name[50];
  int age;
  double gpa;
};

// TODO: Write a function 'display_student' that takes a const Student reference
void display_student(const Student &ref_student) {
  printf("Name: %s, Age: %d, GPA:%2.f \n", ref_student.name, ref_student.age,
         ref_student.gpa);
}

// TODO: Write a function 'is_honor_student' that takes a const Student
// reference
bool is_honor_student(const Student &ref_student) {
  return ref_student.gpa >= 3.5;
}
// and returns true if GPA >= 3.5

int main() {
  Student alice = {"Alice Johnson", 20, 3.8};

  display_student(alice);

  printf("%s is an honor student: %s\n", alice.name,
         is_honor_student(alice) ? "Yes" : "No");
  return 0;
}