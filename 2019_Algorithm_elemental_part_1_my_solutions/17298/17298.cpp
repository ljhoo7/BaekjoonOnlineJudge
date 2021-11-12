#include <iostream>
#include <queue>

int main()
{
	int size = 0;

	std::cin >> size;

	std::queue<int> serial;
	while (size--)
	{
		int input = -1;

		std::cin >> input;

		serial.push(input);
	}

	while (false == serial.empty())
	{
		int target = serial.front();
		serial.pop();

		int nge = target;
		int initialSize = serial.size();
		bool isFirst = true;
		while(initialSize--)
		{
			if (true == isFirst && nge < serial.front())
			{
				nge = serial.front();
				isFirst = false;
			}

			serial.push(serial.front());
			serial.pop();
		}

		if (target < nge)
		{
			std::cout << nge << ' ';

			continue;
		}

		std::cout << "-1 ";
	}
}