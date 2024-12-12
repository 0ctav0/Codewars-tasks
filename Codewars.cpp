#include <iostream>
#include "UniqueInOrder.h"

int main()
{
   for (auto v : uniqueInOrder({ 'Y', 'a', 'a', 'Y', 'a', 'a', 'X', 'b', 'Z', 'Z', 'a', 'a', 'b', 'b', 'b', 'a', 'a', 'a' }))
      std::cout << v;
}
