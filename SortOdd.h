#pragma once
#include <vector>
#include <algorithm>

class Kata
{
public:
   std::vector<int> sortArray(std::vector<int> arr)
   {
      int n = arr.size();
      for (int i = 0; i < n - 1; i++) {
         if (arr[i] % 2 == 0) continue; // do not sort even number
         for (int j = i + 1; j < n; j++) {
            if (arr[j] % 2 == 0) continue; // do not sort with even number
            if (arr[i] > arr[j]) std::swap(arr[i], arr[j]);
         }
      }
      return arr;
   }
};