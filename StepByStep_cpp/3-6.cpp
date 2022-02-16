#include <iostream>
#include <vector>

int main()
{
	int n{};
	std::vector<int> arr;

	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> n;

	int a{}, b{};
	for (int k = 0; k < n; ++k)
	{
		std::cin >> a >> b;
		arr.push_back(a + b);
	}

	for (int k = 0; k < arr.size(); ++k)
	{
		std::cout << "Case #" << k + 1 << ": " << arr[k] << '\n';
	}

	return 0;
}