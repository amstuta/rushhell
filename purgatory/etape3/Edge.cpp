#include "Edge.hpp"

Edge::Edge(char c):
  ch(c)
{
}

Edge::~Edge()
{
}

bool	Edge::operator==(const Edge &e)
{
  return e.ch == ch;
}

bool	Edge::operator==(const char c)
{
  return c == ch;
}

bool	Edge::operator<(const Edge &e) const 
{
	return ch < e.ch;
}

bool	Edge::operator<=(const Edge &e) const
{
	return ch <= e.ch;
}

bool	Edge::operator()(char c)
{
  return c == ch;
}
