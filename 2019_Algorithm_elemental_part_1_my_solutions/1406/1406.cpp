// 1406.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <stack>

int main()
{
	std::string inputStr;
	std::getline(std::cin, inputStr);

	int commandCount = 0;

	std::cin >> commandCount;

	std::stack<char> leftStack, rightStack;

	for(char iChar : inputStr)
	{
		leftStack.push(iChar);
	}

	while (commandCount--)
	{
		char command;

		std::cin >> command;

		switch (command)
		{
		case 'L':
			if (true == leftStack.empty())
			{
				continue;
			}

			rightStack.push(leftStack.top());
			leftStack.pop();

			break;
		case 'D':
			if (true == rightStack.empty())
			{
				continue;
			}

			leftStack.push(rightStack.top());
			rightStack.pop();

			break;
		case 'B':
			if (true == leftStack.empty())
			{
				continue;
			}
			leftStack.pop();

			break;
		case 'P':
			std::cin >> command;
			leftStack.push(command);
			break;
		}
	}

	while (false == leftStack.empty())
	{
		rightStack.push(leftStack.top());
		leftStack.pop();
	}

	while (false == rightStack.empty())
	{
		std::cout << rightStack.top();
		rightStack.pop();
	}

	return 0;
}
