
//����
//
//���л� ��������� 90 % �� �ڽ��� �ݿ��� ����� �Ѵ´ٰ� �����Ѵ�.����� �׵鿡�� ���� ������ �˷���� �Ѵ�.
//�Է�
//
//ù° �ٿ��� �׽�Ʈ ���̽��� ���� C�� �־�����.
//
//��° �ٺ��� �� �׽�Ʈ ���̽����� �л��� �� N(1 �� N �� 1000, N�� ����)�� ù ���� �־�����, �̾ N���� ������ �־�����.������ 0���� ũ�ų� ����, 100���� �۰ų� ���� �����̴�.
//
//���
//
//�� ���̽����� �� �پ� ����� �Ѵ� �л����� ������ �ݿø��Ͽ� �Ҽ��� ��° �ڸ����� ����Ѵ�.
//
//���� �Է� 1 ����
//5
//5 50 50 70 80 100
//7 100 95 90 80 70 60 50
//3 70 90 80
//3 70 90 81
//9 100 99 98 97 96 95 94 93 91
//
//���� ��� 1 ����
//40.000%
//57.143%
//33.333%
//66.667%
//55.556%

//#include <iostream>
//#include <vector>
//#include <cmath>
//
//int main()
//{
//	int n{};
//	std::vector<double> resultVec;
//
//	std::cin.tie(NULL);
//	std::ios::sync_with_stdio(false);
//
//	std::cin >> n;
//
//	for (int k = 0; k < n; ++k)
//	{
//		int num{};
//		std::vector<int> scoreVec;
//
//		std::cin >> num;
//
//		double average{};
//		for (int m = 0; m < num; ++m)
//		{
//			int tmp;
//			std::cin >> tmp;
//
//			scoreVec.emplace_back(std::move(tmp));
//
//			average += tmp;
//		}
//
//		average /= num;
//
//		int cnt{};
//		for (int iInt : scoreVec)
//		{
//			if (average < iInt)
//			{
//				cnt++;
//			}
//		}
//
//		double result = (double)cnt / (double)num * 100.0;
//
//		result = std::round(result * 1000.0) / 1000.0;
//
//		resultVec.push_back(result);
//	}
//
//	std::cout.setf(std::ios::fixed);
//	std::cout.precision(3);
//
//	for (double iter : resultVec)
//	{
//		std::cout << iter << "%\n";
//	}
//
//	return 0;
//}