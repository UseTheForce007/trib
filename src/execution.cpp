#include "execution.hpp"
#include <cmath>
#include <cstdint>
#include <iostream>
#include <string>

Execution::Execution() {}

Execution::Execution(std::string BasePrecision, std::string Device,
                     uint64_t Verbosity)
    : BasePrecision(BasePrecision), Device(Device), Verbosity(Verbosity) {
  if (BasePrecision != "double" && BasePrecision != "single")
    throw std::invalid_argument(
        "BasePrecision must be either double or single.");

  if (Device != "cpu_seq" && Device != "cpu_par" && Device != "gpu_seq" &&
      Device != "gpu_par")
    throw std::invalid_argument(
        "Device must be either cpu_seq, cpu_par, gpu_seq or gpu_par.");
}