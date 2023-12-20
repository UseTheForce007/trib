#ifndef MOES_H
#define MOES_H

class Moes
{
public:
    Moes();
    Moes(double M, double L, double H0);
    void print();

private:
    const double M = 10;
    const double L = 0;
    const double H0 = -0.3;
};
#endif // MOES_H