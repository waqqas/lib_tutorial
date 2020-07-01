#ifndef HEADER_H
#define HEADER_H

#include "Datatypes.h"

namespace emumba {
namespace ice {
struct SpecialFieldTypeHeader {
  template <int16_t id,
            class = typename std::enable_if<(id >= 1 && id <= 5)>::type>
  Numeric_8 get_field_value();

  template <int16_t id, class = typename std::enable_if<(id == 6)>::type>
  Alpha get_field_value();

  Numeric_8 field_id;
  Numeric_16 field_length;
};
} // namespace ice
} // namespace emumba

#endif
