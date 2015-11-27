#include <iostream>
#include "Function.hpp"
#include <boost/bind.hpp>

int func()
{
  return 2;
}

void func3(int a)
{
  std::cout << a << std::endl;
}

int func2(int a, char b)
{
  return a + b;
}

class A
{
public:
  int operator()()
  {
    return 5;
  };
};


int main()
{
  A a;
  Function<int> f = a;
  std::cout << f() << std::endl;

  Function<int> g = &func;
  std::cout << g() << std::endl;

  Function<int (int, char)> h = &func2;
  std::cout << h(12, '0') << std::endl;

  Function<void (int)> i = boost::bind(&func3, _1);
  i(2);
}
