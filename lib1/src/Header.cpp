#include "calc/Header.h"

#include <iostream>

namespace emumba {
namespace ice {
template <int16_t id,
          class = typename std::enable_if<(id >= 1 && id <= 5)>::type>
Numeric_8 SpecialFieldTypeHeader::get_field_value() {
    std::cout << "get_field_value(2)" << std::endl;
  return *(Numeric_8 *)((this + 1));
}

template <int16_t id, class = typename std::enable_if<(id == 6)>::type>
Alpha SpecialFieldTypeHeader::get_field_value() {
  return *(Alpha *)(this + 1);
}

template Numeric_8 SpecialFieldTypeHeader::get_field_value<2>();
template Alpha SpecialFieldTypeHeader::get_field_value<6>();

} // namespace ice
} // namespace emumba
