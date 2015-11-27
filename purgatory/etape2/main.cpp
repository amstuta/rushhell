#include <string>
#include <iostream>
#include "Machine.hpp"

void	search(const std::string &arg)
{
  eState	cur(S0);
  std::string	src("mechant");
  std::string	tok;
  
  if (arg.length() == 0)
    {
      std::cout << "Empty chain" << std::endl;
      return;
    }
  for (int idx(0); idx < arg.length(); ++idx)
    {
      int i = 0;
      while (src[i])
	{
	  if (src[i] == arg[idx])
	    break;
	  ++i;
	}
      if (gActionTable[cur][i] == MA)
	{
	  cur = gStateTable[cur][i];
	  tok += arg[idx];
	  if (gActionTable[cur][i] == HR)
	    {
	      std::cout << tok << std::endl;
	      tok = "";
	      cur = S0;
	    }
	}
      /*else
	{
	  tok = "";
	  cur = S0;
	}*/
    }
}

int	main(int ac, char *av[])
{
  if (ac != 2)
    {
      std::cout << "Error: one argument needed" << std::endl;
      return 1;
    }
  search(av[1]);
  return 0;
}
