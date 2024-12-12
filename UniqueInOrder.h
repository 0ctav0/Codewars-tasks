#pragma once

#include <string>
#include <vector>

template <typename T> std::vector<T> uniqueInOrder(const std::vector<T>& iterable) {
   std::vector<T> res;
   for (size_t i = 0; i < iterable.size(); i++) {
      if (iterable[i] != iterable[i + 1]) res.push_back(iterable[i]);
   }
   return res;
}
std::vector<char> uniqueInOrder(const std::string& iterable) {
   std::vector<char> res;
   for (size_t i = 0; i < iterable.size(); i++) {
      if (iterable[i] != iterable[i + 1]) res.push_back(iterable[i]);
   }
   return res;
}