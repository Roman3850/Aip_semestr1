#include <iostream>
#include <cmath>

//Пользователь вводит параметры фигуры. Найти периметр и площадь фигур:Эллипс

int main()
{
    float x,y;
    std::cin>>x>>y;
    std::cout<<2*3.14*sqrt((x*x+y*y)/2)<<std::endl;
    std::cout<<3.14*x*y<<std::endl;
}
