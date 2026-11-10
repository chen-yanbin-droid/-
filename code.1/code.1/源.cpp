#define _CRT_SECURE_NO_WARNINGS

//   vector
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	ios::sync_with_stdio();
//	cin.tie(nullptr);
//
//	int n;
//	cin >> n;
//	vector<int> s;
//
//	for (int i = 0; i < n; i++)
//	{
//		int x;
//		cin >> x;
//		s.push_back(x);
//	}
//
//	//		仅仅倒序输出:1——从后往前遍历for (int i = s.size() - 1; i >= 0; --i)
//	//					 2——反向迭代器for (auto it = s.rbegin(); it != s.rend(); ++it)
//	//					 3——原地反转
//	//	reverse(s.begin(), s.end());//原地反转全部元素
//	//		//v.reserve(n);//预分配内存，不会改变元素个数 
//	//		//v.resize(10, 7);//,前面——改变元素的个数，后面——改变定义数组的时候没有定义到的位置的数值
//	//	for (auto q : s)
//	//	{
//	//		cout << q << ' ';
//	//	}
//	//	cout << '\n';
//
//
//	//		倒序从小到大输出
//  //方法一
//	//sort(s.begin(), s.end());
//	//ranges::reverse(s);//C++20里面进行【原地反转】
//	//for (auto q : s)
//	//{
//	//	cout << q << ' ';
//	//}
//  //方法二
//  //sort(v.begin(), v.end(), greater<int>());   //std::greater<int>（以及 less、plus、hash、function 等）都定义在 <functional>
//
//	
//	return 0;
//}

#include<iostream>
#include<vector>
#include<string>
#include<utility>
#include<algorithm>
#include<tuple>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<pair<string, int>> stu(n);
	for (auto& q : stu)
	{
		cin >> q.first >> q.second;//pair用first和second来访问两个元素
	}
	
	/*sort(stu.begin(), stu.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
		if (a.second != b.second) return a.second > b.second;
		return a.first < b.first;
		});*/
	sort(stu.begin(), stu.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
		return make_tuple(-a.second, a.first) <
			make_tuple(-b.second, b.first);
		});

	for (const auto a : stu)
	{
		cout << a.first << ' ' << a.second << '\n';
	}

	
	return 0;
}