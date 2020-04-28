#include "calc/Calculator.h"
#include <iostream>

using namespace My::Awesome;

int main(void) {
  Calculator c;

  c.push(1);
  c.push(2);
  c.push(3);

  std::cout << "result: " << c.add() << std::endl;

  return 0;
}