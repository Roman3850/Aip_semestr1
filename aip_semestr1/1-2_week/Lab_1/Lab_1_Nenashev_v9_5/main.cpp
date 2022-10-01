#include <iostream>
#include <cmath>

//Сделать конвертер величин. Формат ввода: Направление_Перевода Величина. Время (неделя, час, сутки)

int main()
{
    float x;
    std::cin>>x;
    std::cout<<x*7*24<<" hours"<<std::endl;
    std::cout<<x*7<<" days";
}
