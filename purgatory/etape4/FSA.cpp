#include <cstdlib>
#include <queue>
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

std::list<int>	*FSA::closure(int id)
{ 
  if (states.find(id) == states.end())
    return NULL;

  std::list<int> *res = new std::list<int>;
  states[id].closure(*res);
  return res;
}

std::list<int>	*FSA::move(const Edge &e)
{
  std::list<int> *res = new std::list<int>;
  
  for (std::map<int, State>::iterator it=states.begin(); it != states.end(); ++it)
    {
      int idx = (*it).second.checkEdge(e);

      if (idx != -1)
	res->push_back(idx);
    }
  return res;
}
