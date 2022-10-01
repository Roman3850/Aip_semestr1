#include <iostream>
#include <cmath>

//Вычислите значение выражения:(x+1)2+3(x+1) при а) x=1.7; б) x=3. Ответ: а) 15.39 б) 28

int main()
{
    float x;
    std::cin>>x;
    std::cout<<((x+1)*(x+1))+3*(x+1);
}
