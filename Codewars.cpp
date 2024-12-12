#include <iostream>
#include "DirectionReduction.h"

int main()
{

   for (auto v : DirReduction::dirReduc(
      { "NORTH", "SOUTH", "SOUTH", "EAST", "WEST", "NORTH", "WEST" }
      //{ "NORTH","SOUTH","SOUTH","EAST","WEST","NORTH", "NORTH" }
   ))
      std::cout << v << " ";
}
