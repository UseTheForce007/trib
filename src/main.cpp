#include "domain.hpp"
#include <iostream>

int main() {
  const uint16_t nx = 32;
  const double xin = -5;
  const double xout = 1.25;
  const uint16_t ny = 16;
  const double yin = -4;
  const double yout = 4;
  const uint16_t mgl = 2;

  auto domain = Domain(xin, xout, nx, yin, yout, ny, mgl);

  domain.print();

  return 0;
}