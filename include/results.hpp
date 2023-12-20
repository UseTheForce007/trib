#ifndef RESULTS_H
#define RESULTS_H

#include <vector>

class Results
{
public:
    Results();
    Results(std::vector<double> &vec_p, std::vector<double> &vec_h, std::vector<double> &vec_q, double h0, std::vector<double> &vec_X, std::vector<double> &vec_Y);
    void print();

private:
    const std::vector<double> vec_p;
    const std::vector<double> vec_h;
    const std::vector<double> vec_q;
    const double h0;
    const std::vector<double> vec_X;
    const std::vector<double> vec_Y;
};

#endif // RESULTS_H
