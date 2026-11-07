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

//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//bool cmp(string a, string b)
//{
//	return a + b > b + a;
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int n;
//	cin >> n;
//
//	vector <string> s(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> s[i];
//	}
//
//	sort(s.begin(), s.end(), cmp);
//	for (int j = 0; j < n; j++)
//	{
//		cout << s[j];
//	}	
//	return 0;
//}


//STL——vector
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	//vector <int> v; //一
//	vector <int> v{1,2,23,23,3,4};// 二
//	//vector<int> v(5, 10);//创建了一个有5个相同元素10的数组
//	v.reserve(n);//预分配内存，不会改变元素个数    【内存会随着数组里面元素的添加而自动扩容】
//	cout << "内存是：" << v.capacity() << ' ' << "元素个数:" << v.size() << '\n';
//	v.resize(10, 7);//,前面——改变元素的个数；  ，后面——改变定义数组的时候没有定义到的位置的数值（上图数组二——1 2 23 23 3 4 7 7 7 7）
//	cout << v.size() << '\n';
//	for (auto q : v) cout << q << ' ';//遍历整个数组
//	cout << '\n';
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(100);//在尾部追加一个元素
//	for (auto q : v) cout << q << ' ';//遍历整个数组
//	cout << '\n';
//	cout << "内存是：" << v.capacity() << '\n';// 【当前容量用capacity】v.capacity()的数值
//												//具体的扩容规则随编译器不同而会发生变化
//
//	v.erase(v.begin() + 6, v.begin() + 10);//删除v数组中下表为6~9的元素（输入下标为6~10，遵循左闭右开规则之后的下标为6~9）
//	for (auto q : v) cout << q << ' ';//遍历整个数组
//	cout << '\n';
//
//
//	v.assign(5, 3);//重新定义v这个数组
//	for (auto q : v) cout << q << ' ';//遍历整个数组
//	cout << '\n';
//	v.assign({ 1,2,3,54,54567,5,7 });//直接指定一组元素
//	for (auto q : v) cout << q << ' ';//遍历整个数组
//	cout << '\n';
//	
//	vector <int> b;
//	b.assign(v.begin(), v.begin() + 4);//取出v数组里面下表为0~3的元素定义为b数组
//	for (auto q : b) cout << q << ' ';//遍历整个数组
//	cout << '\n';
//
//	b.insert(b.begin(), 5, 31);//从b数组里面下表为0处开始，依次插入5个31
//	for (auto q : b) cout << q << ' ';//遍历整个数组
//	cout << '\n';
//
//	b[1] = 20;//不检查越界
//	b.at(2) = 21;//检查越界，越界返回out_of_range
//	for (auto q : b) cout << q << ' ';//遍历整个数组
//	cout << '\n';
//
//	//		元素的查找
//	//if (find(b.begin(), b.end(), 21) != b.end())//find()返回的是迭代器，b.empty()返回的是bool,类型不匹配——所以编译无法通过
//													//find()找不到时会返回迭代器b.end()
//	auto it = find(b.begin(), b.end(), 21);
//	if (it != b.end())
//	{
//		// 方式一：迭代器相减（对 vector 等连续容器最常用）
//		int index = static_cast<int>(it - b.begin());
//		// 方式二：std::distance（对 list 等非连续容器也适用）
//		// int index = static_cast<int>(std::distance(b.begin(), it));
//
//		cout << "找到了，下标 = " << index << "值 = " << *it << '\n';
//	}
//	else
//		cout << "找不到" << '\n';
//		return 0;
//}


