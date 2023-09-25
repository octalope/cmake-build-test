#include <gtest/gtest.h>

#include "../include/NumericIntegration.h"

TEST(NumericIntegration, BasicAssertions) {
  const auto& numInt = NumericIntegration([&](double x) -> double { return 1.0 / x; });
  EXPECT_LT(numInt.Evaluate(1.0, 5.0, 1000.0) - 1.60944, 0.00001);
}