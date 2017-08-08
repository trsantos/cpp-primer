#include <iostream>

int main()
{
  int i = 42;
  int *p1 = &i;
  std::cout << *p1 << std::endl;
  // The following line will change the value of the object pointed by p1 to
  // the product of it by itself.
  *p1 = *p1 * *p1;
  std::cout << *p1 << std::endl;
  return 0;
}
