#include "calc/Calculator.h"
#include "calc/Header.h"

#include <iostream>
using namespace My::Awesome;
using namespace emumba::ice;

int main(void) {
  Calculator c;
  SpecialFieldTypeHeader header;

  std::cout << "get_field_value: " << header.get_field_value<6>() << std::endl;

  c.push(1);
  c.push(2);
  c.push(3);

  std::cout << "result: " << c.add() << std::endl;

  return 0;
}