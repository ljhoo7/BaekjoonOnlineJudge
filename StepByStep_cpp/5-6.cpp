//����
//"OOXXOXXOOO"�� ���� OX������ ����� �ִ�.O�� ������ ���� ���̰�, X�� ������ Ʋ�� ���̴�.������ ���� ��� �� ������ ������ �� �������� ���ӵ� O�� ������ �ȴ�.���� ���, 10�� ������ ������ 3�� �ȴ�.
//
//"OOXXOXXOOO"�� ������ 1 + 2 + 0 + 0 + 1 + 0 + 0 + 1 + 2 + 3 = 10���̴�.
//
//OX������ ����� �־����� ��, ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//�Է�
//ù° �ٿ� �׽�Ʈ ���̽��� ������ �־�����.�� �׽�Ʈ ���̽��� �� �ٷ� �̷���� �ְ�, ���̰� 0���� ũ�� 80���� ���� ���ڿ��� �־�����.���ڿ��� O�� X������ �̷���� �ִ�.
//
//���
//�� �׽�Ʈ ���̽����� ������ ����Ѵ�.
//
//���� �Է� 1
//5
//OOXXOXXOOO
//OOXXOOXXOO
//OXOXOXOXOXOXOX
//OOOOOOOOOO
//OOOOXOOOOXOOOOX
//���� ��� 1
//10
//9
//7
//55
//30

//#include <iostream>
//#include <string>
//#include <vector>
//
//int main()
//{
//	int n{};
//	std::vector<int> arr;
//
//	std::cin.tie(NULL);
//	std::ios::sync_with_stdio(false);
//
//	std::cin >> n;
//
//	std::cin.ignore(256, '\n');
//
//	for(int k = 0; k < n; ++k)
//	{
//		std::string str;
//		std::getline(std::cin, str);
//
//		int cnt{}, sum{};
//		for (char iChar : str)
//		{
//			if (iChar == 'O')
//			{
//				cnt++;
//				sum += cnt;
//			}
//			else
//			{
//				cnt = 0;
//			}
//		}
//
//		arr.push_back(sum);
//	}
//
//	for (int iInt : arr)
//	{
//		std::cout << iInt << '\n';
//	}
//
//	return 0;
//}