#pragma once

#include<functional> 

class NumericIntegration {
private:
  const std::function <double (double x)>& func;
public:
  NumericIntegration(const std::function <double (double x)>& func );

  const double Evaluate(double x_min, double x_max, double partitions) const;
};
