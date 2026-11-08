#define _CRT_SECURE_NO_WARNINGS

//								STL——vector
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
// 
//		查询数组中某一个特殊的元素的出现次数
//	vector<int> a{1, 2, 2, 2, 3, 5};
//	auto lo = lower_bound(a.begin(), a.end(), 2);   // 指向下标 1
//	auto up = upper_bound(a.begin(), a.end(), 2);   // 指向下标 4
//	cout << up - lo;             // 3，等于 2 的个数
// 如果数组是【降序】，要传比较器 greater<int>()，并且含义会反过来：
//	lower_bound(a.begin(), a.end(), x, greater<int>());  // 第一个 <= x
//	upper_bound(a.begin(), a.end(), x, greater<int>());  // 第一个 < x
//		return 0;
//}


//cout << boolalpha;  //作用：让之后输出的bool显示成true/false(boolalpha仅仅只是格式控制符)
//cout << noboolalpha; // 使得bool有重新以数字的形式进行显示



//#include<iterator>
//#include<iostream>
//#include<set>
//using namespace std;
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	set<int> s{ 1,2,3,4,5,6,7,8,9 };//set定义的数组自动去重，从小到大排序
//	//set<int> s;
//	int x;
//	cin >> x;
//	s.insert(x);
//	for (auto a : s) cout << a << ' ';
//	cout << '\n';
//	
//	//s.erase(3);//删除3这个元素
//	
//	//auto it = next(s.begin(), 2);
//	//s.erase(it);// 删除下标为it的元素
//	
//	//【这行错误】s.erase(s.begin(), s.begin() + 2);   s.begin() + 2因为set的迭代器不是【随机显示迭代器】，而是【双向迭代器】
//	//	方法一：agvance移动迭代器
//	/*auto it = s.begin();
//	advance(it, 2);
//	s.erase(s.begin(), it);*/		//删除了前两个元素（区间内部）
//	//	方法二：应用头文件#include<iterator>
//	//				使用s.erase(s.begin(), next(s.begin(), 2));   //删除前两个元素
//	//		方法一，二都遵循区间的左开右闭的规则 
//	for (auto a : s) cout << a << ' ';
//	cout << '\n';
//	
//	//寻找元素并求对应的下标——distance需要头文件#include<iterator>
//	/*if (s.find(100) != s.end())
//	{
//		auto idx = distance(s.begin(), s.find(100));
//		cout << "这个元素的下标是：" << idx << '\n';
//	}		
//	else
//		cout << "这个元素不存在\n";*/
//
//	//s.empty（x）——判断s有无元素x；s.clear()——清除s里面的所有元素；s.count(x)——统计集合s里面x的出现次数；
//	//s.contain(x)——判断x元素是否存在，返回值是bool类型
//
//	//set<int> b{ 1, 2, 3, 5, 8 };
//	//cout << *b.lower_bound(3) << '\n';   // 3（第一个 >= 3）
//	//cout << *b.upper_bound(3) << '\n';   // 5（第一个 > 3）
//
//	//		equal_range()用法示例【等价于把 lower_bound 和 upper_bound 合在一起】
//	//set<int> s{ 1, 2, 3, 5, 8 };
//	//auto [lo, hi] = s.equal_range(3);
//	//cout << *lo << ' ' << *hi << '\n';          // 3 5
//	//auto [lo2, hi2] = s.equal_range(4);
//	//cout << boolalpha << (lo2 == hi2) << '\n';  // true（4 不存在）
//	//cout << *lo2 << '\n';                       // 5（第一个 > 4）
//	//auto [lo3, hi3] = s.equal_range(9);
//	//cout << (lo3 == s.end() && hi3 == s.end()) << '\n';  // true
//
//	return 0;
//}





//					multiset和set的区别
//操作						set												multiset
//元素唯一性					唯一，自动去重									允许重复
//insert(x)					遇到重复										不插入，返回 { 迭代器, false }	照常插入，返回迭代器
//count(x)					只能是 0 或 1									可能是 0、1、2、3…
//find(x)						存在则指向 x									指向某个 x（不保证是第一个）
//erase(x)					删除 0 或 1 个									删除所有等于 x 的元素 ⚠️
//erase(迭代器)				删除该位置一个									删除该位置一个
//equal_range(x)				区间长度 0 或 1									区间长度 = 重复次数
//lower_bound / upper_bound	正常上下界										正好框出所有重复元素
//迭代器类型					双向迭代器										双向迭代器
//随机访问 it + n					❌												❌
//下标 s[i]						❌												❌
//头文件							<set>											<set>

//multiset 只想删一个 2，必须用迭代器：
//multiset<int> ms{ 1, 2, 2, 2, 3 };
//ms.erase(ms.find(2));          // 只删一个 → {1, 2, 2, 3}
//// 或
//ms.erase(ms.lower_bound(2));   // 删第一个 2，效果相同


//set<int> s{ 1, 2, 3, 5 };
//auto [lo, hi] = s.equal_range(3);     // [lo, hi) 里只有 3
//
//multiset<int> ms{ 1, 2, 2, 2, 3 };
//auto [lo2, hi2] = ms.equal_range(2);  // 框住所有 2
//distance(lo2, hi2);                   // 3


