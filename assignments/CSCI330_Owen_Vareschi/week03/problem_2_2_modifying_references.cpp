// Template provided (build on Problem 2.1):
#include <cstdio>
#include <cstring>

struct Student {
  char name[50];
  int age;
  double gpa;
};

void display_student(const Student &ref_student) {
  printf("Name: %s, Age: %d, GPA:%2.f \n", ref_student.name, ref_student.age,
         ref_student.gpa);
}

bool is_honor_student(const Student &ref_student) {
  return ref_student.gpa >= 3.5;
}
// TODO: Write a function 'update_gpa' that takes a Student reference
// (non-const)
double update_gpa(Student &ref_student, double new_gpa) {
  ref_student.gpa = new_gpa;
  return ref_student.gpa;
}

int celebrate_birthday(Student &ref_student) { return ++ref_student.age; }

int main() {
  Student bob = {"Bob Smith", 19, 3.2};

  // Display Bob's initial info
  display_student(bob);

  printf("%s is an honor student: %s\n", bob.name,
         is_honor_student(bob) ? "Yes" : "No");
  // Update Bob's GPA to 3.6
  update_gpa(bob, 3.6);

  // Celebrate Bob's birthday
  celebrate_birthday(bob);

  // Display Bob's updated info
  display_student(bob);

  // Check if Bob is now an honor student
  printf("%s is an honor student: %s\n", bob.name,
         is_honor_student(bob) ? "Yes" : "No");

  return 0;
}