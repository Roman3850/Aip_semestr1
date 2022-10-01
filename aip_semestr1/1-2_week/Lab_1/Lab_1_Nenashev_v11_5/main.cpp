#include <iostream>

/*Сделать конвертер величин. Формат ввода: Направление_Перевода Величина.
Информация (байты, килобайты, биты, мегабайты, дискеты)*/

int main()
{
   float x;
   std::cin>>x;
   std::cout<<x/1024<<" kb"<<std::endl;
   std::cout<<x*8<<" bit"<<std::endl;
   std::cout<<x/1024/1024<<" Mb"<<std::endl;
   std::cout<<x/1213952;
}
