#ifndef LIBCALC_CALCULATOR_H // header guard include library prefix
#define LIBCALC_CALCULATOR_H

#include <future>
#include <vector>

// namespaced library
namespace My {
namespace Awesome {

class Calculator {
private:
  bool _done = false;
  std::vector<int> _args;

  void sum(std::promise<int> &&p);

public:
  int add();
  void clear();
  void push(int);
  Calculator();
};
} // namespace Awesome
} // namespace My

#endif