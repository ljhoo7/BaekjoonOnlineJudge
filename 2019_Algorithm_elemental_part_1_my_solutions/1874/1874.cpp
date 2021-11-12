// 1874.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stack>

int main()
{
	int stackMaxSize = 0;

	std::cin >> stackMaxSize;

	int progressCount = 1;

	std::string boolStack;
	std::stack<int> tmpStack;
	tmpStack.push(0);

	int wantedNumber = 0;
	while (stackMaxSize--)
	{
		std::cin >> wantedNumber;

		if (tmpStack.top() < wantedNumber)
		{
			if (wantedNumber < progressCount)
			{
				std::cout << "NO\n";

				return 0;
			}

			while (progressCount <= wantedNumber)
			{
				tmpStack.push(progressCount++);
				boolStack += '+';
			}

			tmpStack.pop();
			boolStack += '-';

			continue;
		}
		
		if (wantedNumber < tmpStack.top())
		{
			while (tmpStack.top() < wantedNumber)
			{
				tmpStack.pop();
				boolStack += '-';
			}

			if (wantedNumber == tmpStack.top())
			{
				tmpStack.pop();
				boolStack += '-';

				continue;
			}

			if (wantedNumber < progressCount)
			{
				std::cout << "NO\n";

				return 0;
			}

			while (progressCount <= wantedNumber)
			{
				tmpStack.push(progressCount++);
				boolStack += '+';
			}

			tmpStack.pop();
			boolStack += '-';

			continue;
		}

		tmpStack.pop();
		boolStack += '-';
	}

	for (char iChar : boolStack)
	{
		std::cout << iChar << '\n';
	}
}