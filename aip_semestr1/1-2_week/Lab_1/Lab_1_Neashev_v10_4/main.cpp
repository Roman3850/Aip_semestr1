#include <iostream>
#include <cmath>

/*Вычислите значение выражения:(|ݔ − 5| − ݊݅ݏ ݔ)/3 + √ݔଶ + 2014 ܿ ݏ݋ (2ݔ) − 3при x=−2.34. Ответ: -
1.76911 (проверено!)*/

int main()
{
   double x;
   std::cin>>x;
   std::cout<<(fabs(x-5)-sin(x))/3+sqrt(x*x+2014)*cos(2*x)-3;
   return 0;
}


