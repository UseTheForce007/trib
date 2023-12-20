#include "tolerance.hpp"
#include "utility.hpp"
#include <cmath>
#include <cstdint>
#include <iostream>
#include <string>

Tolerance::Tolerance() {}

Tolerance::Tolerance(double tol, double h, double fb) : tol(tol), h(h), fb(fb) {
  checkPositive(tol, "tol");
  checkPositive(h, "h");
  checkPositive(fb, "fb");
}