#include <iostream>
#include <cmath>

//Вычислите значение выражения:ex−2+|sin(x)|−x4⋅cos(1/x) при x=3.6 Ответ: -156.1276

using namespace std;

int main()
{
    float x;
    std::cin>>x;
    std::cout << fixed;
    cout.precision(4);
    std::cout<<exp(x-2)+fabs(sin(x))-pow(x,4)*cos(1/x) << endl;
    return 0;
}
