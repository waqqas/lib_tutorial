#ifndef DATATYPES_H
#define DATATYPES_H
#include "change_endianness.h"
#include <cstdint>

namespace emumba {
namespace ice {

#pragma pack(push, 1)
   template <typename T>
   class Numeric
   {
    public:
      T val;
      // return swapped value
      const T value() const;
      Numeric(T val);
      Numeric();
      ~Numeric();
   };
#pragma pack(pop)

   template class Numeric<int8_t>;
   template class Numeric<int16_t>;
   template class Numeric<int32_t>;
   template class Numeric<int64_t>;

   typedef char             Alpha;
   typedef Numeric<int8_t>  Numeric_8;
   typedef Numeric<int16_t> Numeric_16;
   typedef Numeric<int32_t> Numeric_32;
   typedef Numeric<int64_t> Numeric_64;

}  // namespace ice
}  // namespace emumba

#endif