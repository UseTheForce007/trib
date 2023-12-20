#include "../include/moes.hpp"
#include "utility.hpp"
#include <cmath>
#include <cstdint>
#include <iostream>
#include <string>

Moes::Moes() {}

Moes::Moes(double M, double L, double H0) : M(M), L(L), H0(H0) {

  checkPositive(M, "M");
  checkNonNegative(L, "L");
}

void Moes::print() {
  std::cout << "M: " << M << std::endl;
  std::cout << "L: " << L << std::endl;
  std::cout << "H0: " << H0 << std::endl;
}
