#include <iostream>

//Организовать предыдущее задание с помощью функций.
void summ(float cenpech,float cenkonf);
int main()
{

     float x,y;
     std::cout<<"Vvedite ceny odin 1 kg pechenyi -> ";
     std::cin>>x;
     std::cout<<"\nVvedite ceny odin 1 kg konfet -> ";
     std::cin>>y;
       summ(x,y);
     //Задание (а)
}

void summ(float cenpech,float cenkonf){
    std::cout<<"\nSumma pokypki 1-> "<<cenkonf*0.3+cenpech*0.4<<std::endl;
    std::cout<<"\nSumma pokypki 2-> "<<3*(cenpech*2+cenkonf*1.8)<<std::endl;
}
