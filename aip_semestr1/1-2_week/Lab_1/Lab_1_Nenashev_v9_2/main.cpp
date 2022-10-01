#include <iostream>
#include <cmath>
//Пользователь вводит параметры фигуры. Найти периметр и площадь фигур: Правильный восьмиугольник

int main()
{
    float x;
    std::cin>>x;
    std::cout<<x*x*2*(sqrt(2)+1)<<std::endl;
    std::cout<<x*6;
}
