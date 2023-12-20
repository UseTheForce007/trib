#ifndef RELAXATION_HPP
#define RELAXATION_HPP

#include <cstdint>

class Relaxation
{
public:
    Relaxation();
    Relaxation(double switchEpsValue, double jac, double h0, int numCycles, uint64_t itPre, uint64_t itMain, uint64_t itPost, uint64_t gamma);

private:
    const double switchEpsValue = 0.3;
    const double jac = 0.2;
    const double h0 = 0.01;
    const int numCycles = 50;
    const uint64_t itPre = 2;
    const uint64_t itMain = 10;
    const uint64_t itPost = 2;
    const uint64_t gamma = 2;
};

#endif // RELAXATION_HPP