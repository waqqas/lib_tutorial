#ifndef LIBCALC_CALCULATOR_H // header guard include library prefix
#define LIBCALC_CALCULATOR_H

#include <future>
#include <vector>

#include "Datatypes.h"

// namespaced library
namespace My {
namespace Awesome {
using namespace emumba::ice;

struct SpecialFieldTypeHeader {
  template <int16_t id,
            class = typename std::enable_if<(id >= 1 && id <= 5)>::type>
  Numeric_8 get_field_value() {
    return *(Numeric_8 *)((this + 1));
  }
  template <int16_t id, class = typename std::enable_if<(id == 6)>::type>
  Alpha get_field_value() {
    return *(Alpha *)(this + 1);
  }
  Numeric_8 field_id;
  Numeric_16 field_length;
};

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