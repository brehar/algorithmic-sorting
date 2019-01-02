//
// Created by Brett Hartman on 2019-01-02.
//

#include <algorithm>
#include <iostream>
#include <iterator>
#include <ostream>
#include <string>
#include <vector>

using contact = std::pair<std::string, std::string>;
using contacts = std::vector<contact>;

contacts demo_contacts = {
    {"Javon Bernard", "555-667-2345"}, {"Kiana Lester", "234-745-4534"},
    {"Lia Baldwin", "546-234-7578"},   {"Ryleigh Liu", "094-242-7745"},
    {"Shea Gibbs", "251-647-8941"},    {"Sabrina Galvan", "345-798-3168"},
    {"Glenn Henry", "654-984-8664"},   {"Lucia Wright", "134-798-6464"},
    {"Annika Carr", "461-641-7497"},   {"Bruno Frank", "465-065-4610"}};

inline std::ostream &operator<<(std::ostream &output, const contact &person) {
  output << person.first << ": " << person.second;

  return output;
}

int main() {
  std::for_each(
      demo_contacts.begin(), demo_contacts.end(),
      [](const contact &contact) { std::cout << contact << std::endl; });

  return 0;
}
