#include "calc/Calculator.h"

#include <functional>
#include <numeric>
#include <thread>

namespace My {
namespace Awesome {

void Calculator::sum(std::promise<int> &&p) {
  p.set_value(std::accumulate(_args.begin(), _args.end(), 0));
}

int Calculator::add() {
  _done = true;

  std::promise<int> p;
  auto f = p.get_future();

  std::thread t(std::bind(&Calculator::sum, this, std::placeholders::_1),
                std::move(p));
  t.join();

  return f.get();
}

void Calculator::push(int arg) { _args.push_back(arg); }

void Calculator::clear() { _args.clear(); }
} // namespace Awesome
} // namespace My