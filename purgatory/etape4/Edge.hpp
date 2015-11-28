#pragma once

class Edge
{
  char ch;
  
public:
  Edge(char);
  ~Edge();

  bool operator==(const Edge&);
  bool operator==(const char);
  bool	operator<(const Edge &e) const;
  bool	operator<=(const Edge &e) const;
  bool operator()(char);
};

//bool operator<(const Edge &e, const Edge &i)