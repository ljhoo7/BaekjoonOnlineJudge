#include <iostream>
#include <vector>
#include <cmath>

int main()
{
	int n{};
	std::vector<double> resultVec;

	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> n;

	for (int k = 0; k < n; ++k)
	{
		int num{};
		std::vector<int> scoreVec;

		std::cin >> num;

		double average{};
		for (int m = 0; m < num; ++m)
		{
			int tmp;
			std::cin >> tmp;

			scoreVec.emplace_back(std::move(tmp));

			average += tmp;
		}

		average /= num;

		int cnt{};
		for (int iInt : scoreVec)
		{
			if (average < iInt)
			{
				cnt++;
			}
		}

		double result = (double)cnt / (double)num * 100.0;

		result = std::round(result * 1000.0) / 1000.0;

		resultVec.push_back(result);
	}

	std::cout.setf(std::ios::fixed);
	std::cout.precision(3);

	for (double iter : resultVec)
	{
		std::cout << iter << "%\n";
	}

	return 0;
}