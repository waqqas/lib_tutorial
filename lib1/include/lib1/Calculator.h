#ifndef LIB1_CALCULATOR_H // header guard include library prefix
#define LIB1_CALCULATOR_H

#include <vector>

// namespaced library
namespace My {
namespace Awesome {
class Calculator {
private:
  std::vector<int> args;

public:
  int add();
  void clear();
  void push(int);
};
} // namespace Awesome
} // namespace My

#endif