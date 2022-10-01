#include <iostream>
#include <cmath>

/*Вводятся два целых числа. Проверить делится ли первое на второе. Вывести на
экран сообщение об этом, а также остаток (если он есть) и частное (в любом
случае).*/

int main()
{
    int x,y;
    std::cin>>x>>y;
    if (x%y==0)
        std::cout<<"without a trace "<<x/y<<std::endl;
    else
        std::cout<<"remains ="<<x%y<<" the whole ="<<x/y<<std::endl;
}
