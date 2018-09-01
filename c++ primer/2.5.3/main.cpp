#include<iostream>
int main()
{
  int a = 3, b = 4;
  decltype(a) c = a;
  decltype((b)) d = a;
  std::cout << d << std::endl;
  ++c;
  ++d;
  std::cout << a << std::endl;
}