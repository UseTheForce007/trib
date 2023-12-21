#ifndef INTERNAL_DOMAIN_H
#define INTERNAL_DOMAIN_H

#include <cstdint>
#include <string>
#include <vector>

namespace internal {
class Domain {
public:
  Domain();
  Domain(std::string type, std::vector<double> dx, std::vector<double> dy,
         std::vector<double> x, std::vector<double> y,
         std::vector<std::vector<double>> &vec_x,
         std::vector<std::vector<double>> &vec_y, uint64_t nx, uint64_t ny);

  void print() const;

private:
  const std::string type = "constant";
  const std::vector<double> dx;
  const std::vector<double> dy;
  const std::vector<double> x;
  const std::vector<double> y;
  const std::vector<std::vector<double>> vec_x;
  const std::vector<std::vector<double>> vec_y;
  const uint64_t nx = 32;
  const uint64_t ny = 32;
};
} // namespace internal

#endif // INTERNAL_DOMAIN_H