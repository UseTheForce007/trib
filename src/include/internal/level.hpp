#ifndef LEVEL_HPP
#define LEVEL_HPP

#include "internal/domain.hpp"
#include "results.hpp"
#include <vector>

class Level {
public:
  Level();
  Level(internal::Domain domain, std::vector<double> &k,
        std::vector<double> &k_fft, std::vector<double> &h, Results &results,
        std::vector<double> &p_rhs, std::vector<double> &p_old, double fb);

private:
};

#endif // LEVEL_HPP