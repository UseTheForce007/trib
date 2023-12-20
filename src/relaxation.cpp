#include <iostream>
#include <cstdint>
#include <cmath>
#include <string>
#include "../include/relaxation.hpp"
#include "../include/utility.hpp"

Relaxation::Relaxation() {}

Relaxation::Relaxation(double switchEpsValue, double jac, double h0, int numCycles, uint64_t itPre, uint64_t itMain, uint64_t itPost, uint64_t gamma)
    : switchEpsValue(switchEpsValue), jac(jac), h0(h0), numCycles(numCycles), itPre(itPre), itMain(itMain), itPost(itPost), gamma(gamma)
{
    checkPositive(switchEpsValue, "switchEpsValue");
    checkPositive(jac, "jac");
    checkPositive(h0, "h0");
    checkPositive(numCycles, "numCycles");
    checkPositive(itPre, "itPre");
    checkPositive(itMain, "itMain");
    checkPositive(itPost, "itPost");
    checkPositive(gamma, "gamma");
}