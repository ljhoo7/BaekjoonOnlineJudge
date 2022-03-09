#include <iostream>
#include <map>

int GetTopNumber(int input, int& target)
{
	target += input % 10;
	return input / 10;
}

int main()
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	bool selfNumberArr[10000] = { true, };

	for (int k = 1; k < 10000; ++k)
	{
		int dn = 0;
		
		int copied = k;
		while (0 < copied)
		{
			copied = GetTopNumber(copied, dn);
		}

		if (0 < dn)
		{
			continue;
		}

		dn += k;

		if (10000 < dn)
		{
			break;
		}

		selfNumberArr[dn] = false;
	}

	for (int k = 1; k < 10000; ++k)
	{
		if(selfNumberArr[k])
		{
			std::cout << k << '\n';
		}
	}
}