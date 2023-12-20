#include <iostream>
#include <cstdint>
#include <cmath>
#include <string>
#include "../include/tolerance.hpp"
#include "../include/utility.hpp"

Tolerance::Tolerance() {}

Tolerance::Tolerance(double tol, double h, double fb)
    : tol(tol), h(h), fb(fb)
{
    checkPositive(tol, "tol");
    checkPositive(h, "h");
    checkPositive(fb, "fb");
}