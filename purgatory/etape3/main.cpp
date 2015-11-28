#include <iostream>
#include "Edge.hpp"
#include "Matcher.hpp"

int main(int ac, char *av[])
{
	FSA fsa;
	Matcher yohoTest(fsa);
	yohoTest.createPattern("yoho");
	int result = 0;
	std::cout << "first test: yoho moussaillons yohoho yuohuou yoho yoho" << std::endl;
	yohoTest.find("yoho moussaillons yohoho yuohuou yoho yoho", result);
	std::cout << "result for the yoho test:" << result << " matches founds." << std::endl;
	FSA fsa2;
	Matcher testPattern(fsa2);
	testPattern.createPattern("pattern");
	std::cout << "second test: yoho, je suis un pattern qui aime se faire patterner le pattern patter bien fort" << std::endl;
	testPattern.find("yoho, je suis un pattern qui aime se faire patterner le pattern patter bien fort", result);
	std::cout << "result for the pattern test:" << result << " matches founds." << std::endl;
	FSA fsa3;
	Matcher emptyPattern(fsa3);
	std::cout << "second test: \"\"" << std::endl;
	emptyPattern.createPattern("");
	emptyPattern.find("testeru stuff lol lal lulz", result);
	std::cout << result << std::endl;

	if (ac > 2)
	  {
	    FSA fsa4;
	    Matcher m4(fsa4);
	    std::cout << "User test:" << std::endl;
	    m4.createPattern(av[1]);
	    m4.find(av[2], result);
	    std::cout << result << std::endl;
	  }
}
