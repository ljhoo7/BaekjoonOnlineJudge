#include <iostream>
#include <queue>

int main()
{
	int n, k = 0;

	std::cin >> n >> k;

	std::cout << '<';

	std::queue<int> tmpQueue;

	for (int p = 1; p < n + 1; ++p)
	{
		tmpQueue.push(p);
	}

	while (false == tmpQueue.empty())
	{
		for (int m = 0; m < k - 1; ++m)
		{
			tmpQueue.push(tmpQueue.front());
			tmpQueue.pop();
		}

		std::cout << tmpQueue.front();

		if (1 < tmpQueue.size())
		{
			std::cout << ", ";
		}

		tmpQueue.pop();
	}

	std::cout << '>' << std::endl;
}