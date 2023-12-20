#include <iostream>
#include <cstdint>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>

// Positive check (greater than zero).
// Negative check (less than zero).
// Non-negative check (greater than or equal to zero).

template <typename T1>
void checkPositive(T1 arg1, const std::string &name)
{
    if (arg1 <= 0)
    {
        throw std::invalid_argument(name + " must be positive.");
    }
}

template <typename T1>
void checkNegative(T1 arg1, const std::string &name)
{
    if (arg1 >= 0)
    {
        throw std::invalid_argument(name + " must be negative.");
    }
}

template <typename T1>
void checkNonNegative(T1 arg1, const std::string &name)
{
    if (arg1 < 0)
    {
        throw std::invalid_argument(name + " must be non-negative.");
    }
}
// Must explicitly instantiate the template for the compiler to generate the code.

template void checkPositive<uint64_t>(uint64_t arg1, const std::string &name);
template void checkPositive<double>(double arg1, const std::string &name);

template void checkNegative<uint64_t>(uint64_t arg1, const std::string &name);
template void checkNegative<double>(double arg1, const std::string &name);

template void checkNonNegative<uint64_t>(uint64_t arg1, const std::string &name);
template void checkNonNegative<double>(double arg1, const std::string &name);

void checkString(std::string &input, std::vector<std::string> &list)
{
    if (std::find(list.begin(), list.end(), input) == list.end())
    {
        throw std::invalid_argument("Invalid string input.");
    }
}