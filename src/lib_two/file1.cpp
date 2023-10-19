#include <iostream>

void Function1() {
  std::cout << "Function1 from second library" << std::endl;
}

class Class1 {
public:
  Class1() {
    std::cout << "Class1 from second library" << std::endl;
  }
};