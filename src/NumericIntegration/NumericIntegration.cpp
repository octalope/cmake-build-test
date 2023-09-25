
#include "NumericIntegration.h"

NumericIntegration::NumericIntegration(const std::function <double (double x)>& func)
  : func(func)
{
}

const double NumericIntegration::Evaluate(double x_min, double x_max, double partitions) const
{
  const double deltaX = (x_max - x_min) / partitions;
  double integral = 0;

  for(double x = x_min; x <= x_max - deltaX; x+= deltaX) {
    double area = deltaX * (this->func(x) + this->func(x + deltaX)) / 2.0;
    integral += area;
  }

  return integral;
}
