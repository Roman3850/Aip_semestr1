#include <iostream>
#include <cmath>

int main()
{
    std::cout<<std::fixed;
    std::cout.precision(5);
    double x=3.6;
    x=exp(x-2)+fabs(sin(x))-pow(x,4)*cos(1/x);
    std::cout<<x;
}
