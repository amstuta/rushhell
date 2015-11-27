#include <iostream>
#include <cstdlib>
#include "FunctionSignature.hpp"

int my_func()
{
  return 10;
}

int my_func2(char *c)
{
  (void)c;
  return 11;
}

void my_func3(int a, void *b)
{
}

void my_func4(int a, void *b, char c)
{
}

void my_func5(int a, void *b, char c, double d)
{
}

int main()
{
  FunctionSignature<int>::type f = &my_func;
  int ret = f();
  std::cout << ret << std::endl;

  FunctionSignature<int (char*)>::type g = &my_func2;
  int ret1 = g((char*)"");
  std::cout << ret1 << std::endl;

  FunctionSignature<void (int, void*)>::type h = &my_func3;
  h(0, NULL);

  FunctionSignature<void (int, void*, char)>::type i = &my_func4;
  i(0, NULL, 'c');

  FunctionSignature<void (int, void*, char, double)>::type j = &my_func5;
  j(0, NULL, 'c', 2.2);
}
