#include <ctime>
#include <iostream>
#include <string>

int main() {
  // TODO: Print "Hello, World!" to the console
  std::cout << "Hello, world!" << std::endl;
  // TODO: Prompt user for their name
  std::cout << "What is your name?" << std::endl;
  // TODO: Read the user's name
  std::string name;
  std::cin >> name;
  // TODO: Greet the user by name
  std::cout << "Hello, " + name << std::endl;
  // BONUS TODO: Display current date
  time_t timestamp;
  time(&timestamp);

  std::cout << ctime(&timestamp);

  return 0;
}
