//#include <iostream>
//
//int main()
//{
//	int a{}, b{}, c{};
//
//	std::cin >> a >> b >> c;
//
//	int cnt = 0, target = a, gift = 0;
//
//	if (a == b)
//	{
//		cnt++;
//		target = a;
//	}
//
//	if(b == c)
//	{
//		cnt++;
//		target = b;
//	}
//
//	if (a == c)
//	{
//		cnt++;
//		target = a;
//	}
//
//	switch (cnt)
//	{
//	case 0:
//		if (target < c)
//		{
//			target = c;
//		}
//		
//		if(target < b)
//		{
//			target = b;
//		}
//
//		if (target < c)
//		{
//			target = c;
//		}
//
//		gift = target * 100;
//		break;
//	case 1:
//		gift = 1000 + target * 100;
//
//		break;
//	case 2:
//	case 3:
//		gift = 10000 + target * 1000;
//
//		break;
//	}
//
//	std::cout << gift << std::endl;
//
//	return 0;
//}