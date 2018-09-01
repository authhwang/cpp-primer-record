#include<iostream>
int main() 
{
  int i = 0, &r1 = i;
  double d = 0, &r2 = d;
  
  r2 = r1;
  i = r2;
  r1 = d;

  int i1, &r3 = i1;
  i1 = 5; r3 = 10;
  std::cout << i1 << " " << r3 << std::endl;
}