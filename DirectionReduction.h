#pragma once

#include <vector>
#include <string>

class DirReduction
{
public:
   static std::vector<std::string> dirReduc(std::vector<std::string> arr) {
      std::vector<std::string> res;
      if (arr.size() == 0) return res;
      for (size_t i = 0; i < arr.size(); i++) {
         auto c = arr[i];

         /*auto c = arr[i], n = i == arr.size() - 1 ? "" : arr[i + 1];
         if ((c == "NORTH" && n == "SOUTH") || (c == "SOUTH" && n == "NORTH") ||
             (c == "EAST" && n == "WEST") || (c == "WEST" && n == "EAST")) {
             i++;
             continue;
          }
          res.push_back(c);*/
      }
      size_t i = 0;
      do {
         auto curr = arr[i];
         auto last = res.size() > 0 ? res.back() : "";
         i++;
         if ((last == "NORTH" && curr == "SOUTH") || (last == "SOUTH" && curr == "NORTH") ||
            (last == "EAST" && curr == "WEST") || (last == "WEST" && curr == "EAST")) {
            res.pop_back();
            continue;
         }
         res.push_back(curr);
      } while (i < arr.size());
      return res;
   }
};