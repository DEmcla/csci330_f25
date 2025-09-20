#include <cstdio>
#include <cstring>

struct Student {
  char name[50];
  int age;
  double gpa;

  void display_student() const {
    printf("Student Name: %s\nStudent Age: %d\nStudent GPA: %.1f\n", name, age,
           gpa);
  }
  bool is_honor_student() const { return (gpa >= 3.5); }

  void celebrate_birthday() {
    age++;
    printf("Happy birthday %s\n", name);
  }
  void update_gpa(double gpa) { this->gpa = gpa; }
};

// TODO: Keep your display_student and is_honor_student functions from 2.1

// TODO: Write a function 'update_gpa' that takes a Student reference
// Why would this take a student reference?
// (non-const) and a new GPA value, then updates the student's GPA

// TODO: Write a function 'celebrate_birthday' that takes a Student reference
// and increments their age by 1

int main() {
  Student bob = {"Bob Smith", 19, 3.2};
  bob.display_student();
  printf("\n");
  bob.update_gpa(3.6);
  bob.celebrate_birthday();
  printf("\n");
  bob.display_student();
  if (bob.is_honor_student()) {
    printf("Bob has achieved honors!\n");
  }
  // TODO: Display Bob's initial info
  // TODO: Update Bob's GPA to 3.6
  // TODO: Celebrate Bob's birthday
  // TODO: Display Bob's updated info
  // TODO: Check if Bob is now an honor student

  return 0;
}