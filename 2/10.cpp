#include <iostream>

std::string global_str;  // ""
int global_int;          // 0

int main()
{
  int local_int;         // uninitialized
  std::string local_str; // ""

  std::cout << global_str << std::endl;
  std::cout << global_int << std::endl;
  // local_int is uninitialized!
  std::cout << local_int << std::endl;
  std::cout << local_str << std::endl;
  
  return 0;
}
