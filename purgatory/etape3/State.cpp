#include "State.hpp"

State::State(int stateName):
  final(false),
  stName(stateName)
{
}

State::~State()
{
}

void	State::setFinal(bool f)
{
  final = f;
}

bool	State::isFinal() const
{
  return final;
}

bool	State::operator==(const State &s)
{
  return s.stName == stName;
}

int	State::getName() const
{
  return stName;
}

void State::addState(Edge e, int st)
{
	edges[e] = st;
}

int State::checkEdge(const Edge &e)
{
	if (edges.find(e) != edges.end())
	{
		return edges[e];
	}
	else
	{
		return -1;
	}
}

State	*State::getNextState()
{
	st += 1;
  return new State(st - 1);
}

int State::st = 0;