#include <iostream>
#include <vector>

int main() {
  // Use a vector of int8_t instead of std::vector<bool>
  std::vector<int8_t> vec;
  vec.push_back(1); // True
  vec.push_back(0); // False
  
  std::cout << vec[0] << " " << vec[1] << std::endl; 
  return 0;
}
