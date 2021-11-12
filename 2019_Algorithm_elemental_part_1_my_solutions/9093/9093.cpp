#include <iostream>
#include <stack>
#include <string>

void printStack(std::stack<char>& targetStack)
{
	while (false == targetStack.empty())
	{
		std::cout << targetStack.top();
		targetStack.pop();
	}
}

int main()
{
	int commandCount = 0;

	std::cin >> commandCount;

	std::cin.ignore();

	std::stack<char> stackBuffer;
	while (commandCount--)
	{
		std::string tmpStr;

		std::getline(std::cin, tmpStr);

		for (char iChar : tmpStr)
		{
			switch (iChar)
			{
			case ' ':
				printStack(stackBuffer);
				std::cout << ' ';
				break;
			default:
				stackBuffer.push(iChar);
				break;
			}
		}

		printStack(stackBuffer);
		std::cout << '\n';
	}
}