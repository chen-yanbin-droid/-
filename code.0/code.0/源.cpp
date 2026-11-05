#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<tuple>
//using namespace std;
//
//struct s
//{
//	int sum;
//	int hao;
//	int yu, shu, yin;
//};
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	vector <s> grade;
//	for (int i = 1; i <= n; i++)
//	{
//		int yu, shu, yin;
//		cin >> yu >> shu >> yin;
//		int sum = yu + shu + yin;
//		grade.push_back({ sum, i, yu, shu, yin });
//	}
//	
//	sort(grade.begin(), grade.end(), [](const s& a, const s& b) {
//		return make_tuple(a.sum, a.yu, -a.hao) >
//			make_tuple(b.sum, b.yu, -b.hao);
//		});
//
//	int k = min(n, 5);
//	for (int j = 0; j < k; j++)
//	{
//		cout << grade[j].hao << ' ' << grade[j].sum << '\n';
//	}
//	return 0;
//}

#include<iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	
	return 0;
}