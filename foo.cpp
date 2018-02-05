#include <iostream> // std::cout

#include <a/a.hpp>
#include <b/b.hpp>

int main() {
  std::cout << "Running 'a' module" << std::endl;
  a::a a_module;
  a_module.Run();


  std::cout << "Running 'b' module" << std::endl;
  b::b b_module;
  b_module.Run();
}
