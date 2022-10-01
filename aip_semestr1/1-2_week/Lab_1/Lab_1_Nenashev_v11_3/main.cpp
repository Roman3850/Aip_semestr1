#include <iostream>

/*Пользователь вводит два числа. Необходимо поменять значения переменных так,
чтобы значение первой оказалось во второй, а второй - в первой.*/

int main()
{
    float x,y,c;
    std::cin>>x>>y;
    c=y;
    y=x;
    x=c;
    std::cout<<"x="<<x<<std::endl;
    std::cout<<"y="<<y<<std::endl;
}
