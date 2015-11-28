#include "FSA.hpp"

FSA::FSA()
{
}

FSA::~FSA()
{
}

void	FSA::addState(State &st)
{
  states[st.getName()] = st;
}

State	&FSA::operator[](const int stateName)
{
  return states[stateName];
}
