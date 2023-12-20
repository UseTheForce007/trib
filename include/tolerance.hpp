#ifndef TOLERANCE_HPP
#define TOLERANCE_HPP

/*

 Properties that define the tolerances for determining convergence of
     the solution. Convergence is said to be achieved if the difference of
     the old and new solution is within the tolerance specified here.

     Syntax:
     obj = Tolerance(p,h,fb)

     Input arguments:
     p: Fluid pressure
     h: Film Thickness
     fb: Force Balance

*/

class Tolerance
{
public:
    Tolerance();
    Tolerance(double tol, double h, double fb);

private:
    const double tol = 1e-4;
    const double h = 1e-4;
    const double fb = 1e-4;
};
#endif // TOLERANCE_HPP