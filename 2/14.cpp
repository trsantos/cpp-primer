// The following program is valid.

#include <iostream>

int main()
{
  int i = 100, sum = 0;
  for (int i = 0; i != 10; ++i)
    sum += i; // uses last defined i
  // uses i from global scope and prints 100 45
  std::cout << i << " " << sum << std::endl;
  return 0;
}
