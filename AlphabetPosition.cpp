#include <string>

std::string alphabet_position(const std::string& text) {
   std::string lowercase;
   for (auto c : text) {
      auto letter = std::tolower(c);
      if (letter < 'a' || letter > 'z') continue;
      auto index = letter - 'a' + 1;
      lowercase += std::to_string(index) + " ";
   }
   return lowercase.substr(0, lowercase.size() - 1);
}