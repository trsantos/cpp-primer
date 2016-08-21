#include <iostream>
#include "Sales_item.h"
int main()
{
  Sales_item firstItem, currItem;
  std::cin >> firstItem;
  while (std::cin >> currItem)
    if (currItem.isbn() == firstItem.isbn())
      firstItem += currItem;
    else {
      std::cerr << "All books must have the same ISBN" << std::endl;
      return -1;
    }
  std::cout << firstItem << std::endl;
  return 0;
}
