#include <iostream>
#include <string>

int main()
{
	int commandCount = 0;
	
	std::cin >> commandCount;

	std::cin.ignore();

	while (commandCount--)
	{
		int stackCount = 0;
		std::string tmpStr;
		std::getline(std::cin, tmpStr);

		for (char iChar : tmpStr)
		{
			switch (iChar)
			{
			case '(':
				stackCount++;
				break;
			case ')':
				stackCount--;
				break;
			}

			if (stackCount < 0)
			{
				break;
			}
		}

		if (stackCount)
		{
			std::cout << "NO\n";
			continue;
		}
		std::cout << "YES\n";
	}
}