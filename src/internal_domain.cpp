#include <iostream>
#include <cstdint>
#include <cmath>
#include <string>
#include "./include/internal_domain.hpp"
#include "../include/utility.hpp"

namespace internal
{
    Domain::Domain() {}

    Domain::Domain(std::string type, std::vector<double> dx, std::vector<double> dy, std::vector<double> x, std::vector<double> y, std::vector<std::vector<double>> &vec_x, std::vector<std::vector<double>> &vec_y, uint64_t nx, uint64_t ny)
        : type(type), dx(dx), dy(dy), x(x), y(y), vec_x(vec_x), vec_y(vec_y), nx(nx), ny(ny)
    {
        checkPositive(nx, "dx");
        checkPositive(ny, "dy");

        if (nx < 16)
            throw std::invalid_argument("nx must be greater than or equal to 16.");

        if (ny < 16)
            throw std::invalid_argument("ny must be greater than or equal to 16.");
    }

}
