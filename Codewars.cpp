#include <iostream>
#include "Snail.h"

int main()
{

   //for (auto v : DirReduction::dirReduc(
   //   { "NORTH", "SOUTH", "SOUTH", "EAST", "WEST", "NORTH", "WEST" }
   //   //{ "NORTH","SOUTH","SOUTH","EAST","WEST","NORTH", "NORTH" }
   //))
   //   std::cout << v << " ";

   auto res = snail({
      //{1},

  //{1,2},
  //{3,4},

  {1,2,3},
  {4,5,6},
  {7,8,9}

  /*  { 1,  2,  3,  4  },
    { 5,  6,  7,  8  },
    { 9,  10, 11, 12 },
    { 13, 14, 15, 16 },*/
      });
   for (auto v : res) std::cout << v << " ";
   return 0;
}
