#include "Matcher.hpp"

Matcher::Matcher(const FSA &f) :
	fsa(f),
	firstState(0),
	currentState(0)
{
}

Matcher::~Matcher()
{
}

void Matcher::createPattern(const std::string &pattern)
{
	State *stp = 0;
	State *st = 0;
	for (int i(0); i < pattern.size(); ++i)
	{
		stp = st;
		st = State::getNextState();
		if (i == 0)
		{
			firstState = st->getName();
		}
		if (i + 1 == pattern.size())
		{
			st->setFinal(true);
		}
		if (stp)
		{
			stp->addState(Edge(pattern[i - 1]), st->getName());
			fsa.addState(*stp);
		}
		if (i + 1 == pattern.size())
		{
			st->setFinal(true);
			fsa.addState(*st);
		}
	}
}

bool Matcher::find(const std::string &pat)
{
	int i;
	return find(pat, i);
}

bool	Matcher::find(const std::string &str, int &count)
{
	currentState = firstState;
	int next = 0;
	count = 0;
	for (int i(0); i < str.size(); ++i)
	{
		if (next == -1 && fsa[currentState].isFinal())
		{
			currentState = firstState;
			count += 1;
		}
		if ((next = fsa[currentState].checkEdge(Edge(str[i]))) != -1)
			currentState = next;

	}
	if (next == -1 && fsa[currentState].isFinal())
	{
		currentState = firstState;
		count += 1;
	}
	return count != 0;
}
