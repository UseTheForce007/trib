#ifndef DOMAIN_H
#define DOMAIN_H

#include <cstdint>
#include <string>

class Domain
{
    // Syntax:
    //  obj = Domain(xin,xout,nx,yin,yout,ny,mgl)
    //  obj = Domain(xin,xout,nx,yin,yout,ny,mgl,typeX)
    //  obj = Domain(xin,xout,nx,yin,yout,ny,mgl,typeX,typeY)
    //
    //  Input arguments:
    //  mgl: The total number of levels in the multigrid system
    //  nx, ny: Grid points along the respective direction
    //  xin, xout, yin, yout: Domain boundary is [xin xout] and [yin yout].
    //  This is non-dimensionalized to the Moes Parameters.
    //  typeX, typeY: Type of domain. Currently, only "constant" grid spacing
    //  is supported. Chebyshev could be added in the future.

public:
    Domain();
    Domain(double xin, double xout, uint64_t nx, double yin, double yout, uint64_t ny, uint64_t mgl, std::string typeX = "constant", std::string typeY = "constant");
    void print() const;

private:
    const uint64_t mgl = 3;
    const uint64_t nx = 32;
    const uint64_t ny = 32;
    const double xin = -3;
    const double xout = 3;
    const double yin = -3;
    const double yout = 3;
    const std::string typeX = "constant";
    const std::string typeY = "constant";
};

#endif // DOMAIN_H
