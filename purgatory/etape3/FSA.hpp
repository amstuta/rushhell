#pragma once

#include "State.hpp"

class FSA
{
  std::map<int, State> states;
  
public:
  FSA();
  ~FSA();

  void	addState(State&);
  State	&operator[](const int);
};
