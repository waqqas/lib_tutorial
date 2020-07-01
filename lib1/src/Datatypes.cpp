#include "calc/Datatypes.h"

using namespace emumba::ice;

template <typename T>
const T Numeric<T>::value() const
{
   return swap_endian(val);
}

template <typename T>
Numeric<T>::Numeric(T _val)
{
   val = swap_endian(_val);
}

template <typename T>
Numeric<T>::Numeric()
{}

template <typename T>
Numeric<T>::~Numeric()
{}