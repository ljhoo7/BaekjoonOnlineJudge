#include <iostream>
#include <string>

int main()
{
	std::string inputStr;

	std::getline(std::cin, inputStr);

	int stick = 0, resultFragCount = 0;

	bool prevIsOpen = false;

	for (char iChar : inputStr)
	{
		if ('(' == iChar)
		{
			if (true == prevIsOpen)
			{
				++stick;
			}

			prevIsOpen = true;
		}
		else if (')' == iChar)
		{
			if (true == prevIsOpen)
			{
				resultFragCount += stick;
			}
			else
			{
				if (0 < stick)
				{
					--stick;
					++resultFragCount;
				}
			}

			prevIsOpen = false;
		}
	}

	std::cout << resultFragCount;
}