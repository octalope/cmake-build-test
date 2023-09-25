#include <iostream>

#include "NumericIntegration.h"

int main() {
  const auto& numInt = NumericIntegration([&](double x) -> double { return 1.0 / x; });

  std::cout << "Area: " << numInt.Evaluate(1.0, 5.0, 1000.0) << std::endl;
  return 0;
}
