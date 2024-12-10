#pragma once
#include <string>

std::string to_camel_case(std::string text) {
   int last_pos = 0;
   std::string camel;
   text += "-";
   for (int i = 0; i < text.size(); i++) {
      if (text[i] == '-' || text[i] == '_') {
         auto word = text.substr(last_pos, i - last_pos);
         char first = last_pos > 0 ? std::toupper(word[0]) : word[0];
         camel += first + word.substr(1);
         last_pos = i + 1;
      }
   }
   return camel;
}