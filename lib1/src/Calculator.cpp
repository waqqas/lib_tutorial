#include "calc/Calculator.h"

#include <numeric>

namespace My {
namespace Awesome {
int Calculator::add() { return std::accumulate(args.begin(), args.end(), 0); }

void Calculator::push(int arg) { args.push_back(arg); }

void Calculator::clear() { args.clear(); }
} // namespace Awesome
} // namespace My