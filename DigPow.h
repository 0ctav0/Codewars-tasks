#pragma once
#include <string>
#include <cmath>

int digit_pow(int n, int p) {
   auto str_num = std::to_string(n);
   int sum = 0;
   for (auto c : str_num) {
      auto digit = c - '0';
      sum += pow(digit, p);
      p++;
   }
   if (sum % n == 0) return sum / n;
   return -1;
}