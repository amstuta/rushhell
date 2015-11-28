#include <vector>
#include "Inspector.hpp"

struct A
{
};

std::ostream &operator<<(std::ostream &out, const A &a)
{
  std::cout << "I am a printable A object :)" << std::endl;
}

struct B {};

int main()
{
  int i = 42;
  std::vector<void *> fdp;
  A a;
  B b;

  std::cout << "Test int (printable): " << std::endl;
  inspect(i);

  std::cout << "Test vector (not printable):" << std::endl;
  inspect(fdp);

  std::cout << "Test A (printable):" << std::endl;
  inspect(a);

  std::cout << "Test B (not printable):" << std::endl;
  inspect(b);
  
  return 0;
}
