#pragma once
#include <vector>
#include <iostream>
#include <cmath>

std::vector<int> snail(const std::vector<std::vector<int>>& snail_map) {
   std::vector<int> res;
   auto n = snail_map.size();
   for (int start = 0, end = n; start < ceil(n / 2.0); start++, end--) {
      for (int col = start; col < end; col++) res.push_back(snail_map[start][col]);
      for (int row = start + 1; row < end; row++) res.push_back(snail_map[row][end - 1]);
      for (int col = end - 2; col >= start; col--) res.push_back(snail_map[end - 1][col]);
      for (int row = end - 2; row >= start + 1; row--) res.push_back(snail_map[row][start]);
   }
   return res;
}