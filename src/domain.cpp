#include "domain.hpp"
#include "utility.hpp"
#include <cmath>
#include <cstdint>
#include <iostream>
#include <string>

Domain::Domain() {}

void Domain::print() const {
  std::cout << "mgl: " << mgl << std::endl;
  std::cout << "nx: " << nx << std::endl;
  std::cout << "ny: " << ny << std::endl;
  std::cout << "xin: " << xin << std::endl;
  std::cout << "xout: " << xout << std::endl;
  std::cout << "yin: " << yin << std::endl;
  std::cout << "yout: " << yout << std::endl;
  std::cout << "typeX: " << typeX << std::endl;
  std::cout << "typeY: " << typeY << std::endl;
}

Domain::Domain(double xin, double xout, uint64_t nx, double yin, double yout,
               uint64_t ny, uint64_t mgl, std::string typeX, std::string typeY)
    : mgl(mgl), nx(nx), ny(ny), xin(xin), xout(xout), yin(yin), yout(yout),
      typeX(typeX), typeY(typeY) {

  checkPositive(mgl, "mgl");
  checkPositive(nx, "nx");
  checkPositive(ny, "ny");
  checkPositive(xout, "xout");
  checkPositive(yout, "yout");
  checkNegative(xin, "xin");
  checkNegative(yin, "yin");

  if (nx < 16)
    throw std::invalid_argument("nx must be greater than or equal to 16.");

  if (ny < 16)
    throw std::invalid_argument("ny must be greater than or equal to 16.");
}
