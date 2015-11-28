#pragma once

#include <string>
#include "FSA.hpp"

class Matcher
{
  FSA	fsa;
  int   firstState;
  int   currentState;
  
public:
  Matcher(const FSA&);
  ~Matcher();
  void createPattern(const std::string &);
  bool  find(const std::string&);
  bool	find(const std::string&, int &count);
};
