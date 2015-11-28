#pragma once

#include <map>
#include "Edge.hpp"

/*enum eState
  {
    S0,
    S1,
    S2,
    S3,
    S4,
    S5,
    S6,
    S7,
    STATE_ERROR
  };*/

/*enum eAction
  {
    MA,
    HR,
    ACTION_ERROR
  };*/


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
  static State *getNextState();
};
