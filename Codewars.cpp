#include <iostream>
#include "SortOdd.h"

int main()
{
   Kata k;
   for (auto el : k.sortArray({ 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 })) { // 1, 8, 3, 6, 5, 4, 7, 2, 9, 0
      std::cout << el;
   }
}
