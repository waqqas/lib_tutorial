#include "lib1/Calculator.h"
#include <iostream>
using namespace My::Awesome;

int main(void) {
  Calculator c;

  std::cout << "result: " << c.add(1, 2) << std::endl;

  return 0;
}