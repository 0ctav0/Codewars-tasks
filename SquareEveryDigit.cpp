#include <cmath>

int square_digits(int num) {
   if (num == 0) return 0;
   int i = 0;
   int div;
   do {
      div = pow(10, i);
      auto digit = (num / div) % 10;
      i++;
   } while (div <= num);
}