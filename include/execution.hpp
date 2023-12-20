#ifndef EXECUTION_HPP
#define EXECUTION_HPP

#include <string>
#include <cstdint>

/*% Execution strategy of the solver.
    %
    % Syntax:
    % obj = Execution(basePrecision,device, verbosity)
    %
    % Input arguments:
    % BasePrec: Precision of the calculations
    % Device: Choose whether to run on the CPU or GPU. Caution: GPU is not
    % optimized yet.
    % Verbosity: 1 for text update, 2 for graphical plot update during the
    % solution process (slows down solution process)*/

class Execution
{
public:
    Execution();
    Execution(std::string BasePrecision, std::string Device, uint64_t Verbosity);

private:
    const std::string BasePrecision = "double";
    const std::string Device = "cpu_seq";
    const uint64_t Verbosity = false;
};

#endif // EXECUTION_HPP