#include <iostream>
#include <string>
#include <deque>

void PrintDeque(std::deque<char>& strStack, const bool& tagStarted)
{
	while (false == strStack.empty())
	{
		if (false == tagStarted)
		{
			std::cout << strStack.back();
			strStack.pop_back();
		}
		else
		{
			std::cout << strStack.front();
			strStack.pop_front();
		}
	}
}

int main()
{
	std::string inputStr;

	std::getline(std::cin, inputStr);

	inputStr.push_back('\n');

	bool tagStarted = false;
	std::deque<char> strStack;

	for (char iChar : inputStr)
	{
		if (('a' <= iChar && iChar <= 'z') || ('0' <= iChar && iChar <= '9'))
		{
			strStack.push_back(iChar);
		}
		else if (' ' == iChar || '\n' == iChar)
		{
			PrintDeque(strStack, tagStarted);

			std::cout << iChar;
		}
		else if ('<' == iChar)
		{
			PrintDeque(strStack, tagStarted);
			std::cout << iChar;
			tagStarted = true;
		}
		else if ('>' == iChar)
		{
			PrintDeque(strStack, tagStarted);
			std::cout << iChar;
			tagStarted = false;
		}
	}
}