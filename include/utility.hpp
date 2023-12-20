#ifndef UTILITIES_H
#define UTILITIES_H

#include <cstdint>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>

template <typename T1>
void checkPositive(T1 arg1, const std::string &name);

template <typename T1>
void checkNegative(T1 arg1, const std::string &name);

template <typename T1>
void checkNonNegative(T1 arg1, const std::string &name);

void checkString(std::string &input, std::vector<std::string> &list);

#endif // UTILITIES_H