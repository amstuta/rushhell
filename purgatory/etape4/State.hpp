#pragma once

#include <map>
#include <list>
#include "Edge.hpp"

class State
{
  bool	 final;
  int stName;
  std::map<Edge, int> edges;

  static int st;
  
public:
  State(int = 0);
  ~State();

  void	 setFinal(bool);
  bool	 isFinal() const;
  bool	 operator==(const State&);
  int    getName() const;
  void	 addState(Edge, int);
  int    checkEdge(const Edge &);
  void	 closure(std::list<int>&);
  
  static State *getNextState();
};
