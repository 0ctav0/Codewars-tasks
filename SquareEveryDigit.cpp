#include <iostream>
#include <cmath>
#include <vector>

int number_of_digits(int num) {
   auto i = 0;
   while (num) {
      i++;
      num /= 10;
   }
   return i;
}

int square_digits(int num) {
   if (num == 0) return 0;
   int result = 0;
   std::vector<int> digits{};
   while (num) {
      auto digit = num % 10;
      digits.insert(digits.begin(), digit);
      num /= 10;
   }
   for (auto digit : digits) {
      auto power = digit * digit;
      result = result * pow(10, power > 0 ? number_of_digits(power) : 1) + power;
      std::cout << digit;
   }
   return result;
}