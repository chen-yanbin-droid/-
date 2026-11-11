#define _CRT_SECURE_NO_WARNINGS


//			【各种容器库删除特定元素的方法】
//标准 STL / C++ 【标准库容器】可以分为以下几类：
//
//* *【序列容器】 * *
//
//| 容器						| 头文件				| 特点 |
//|-- - | -- - | -- - |
//| `std::array<T, N>` | `		<array > ` |			 固定大小，连续存储，不能删除元素 |
//| `std::vector<T>` |			`<vector > ` |			动态数组，连续存储，尾部插入效率高 |
//| `std::deque<T>` | `			<deque > ` |			双端队列，可在两端高效插入、删除 |
//| `std::list<T>` | `			<list > ` |				双向链表，任意位置删除效率高 |
//| `std::forward_list<T>		<forward_list > ` |		单向链表，只有 `erase_after()`，没有普通 `erase()` |
//| `std::basic_string<T>		<string > ` |				字符序列，如 `std::string`、`std::wstring` |
//  删除特定元素	s.erase(remove(s.begin(), s.end(), 8), s.end());
//  删除一组具有相同特征的元素 s.erase(remove_if(s.begin(), s.end(), [](int n) {return n % 2 == 0;}), s.end()); 
//									一.[]：lambda 的捕获列表，这里不捕获外部变量；二.(int n)：lambda 的参数；三.n % 2 == 0：返回该元素是否为偶数
//				【分解开来理解】	第一步：找出删除后的结束位置
//									auto new_end = remove(s.begin(), s.end(), 8);
//									第二步：真正删除尾部残留元素
//									s.erase(new_end, s.end());
//**【关联容器】 * *
//
//| 容器 | 头文件 | 特点 |
//|-- - | -- - | -- - |
//| `std::set<T>` | `<set > ` | 有序且元素唯一 |
//| `std::multiset<T>` | `<set > ` | 有序，允许重复元素 |
//| `std::map<K, V>` | `<map > ` | 有序键值映射，键唯一 |
//| `std::multimap<K, V>` | `<map > ` | 有序键值映射，允许重复键 |
//
//这些容器通常直接按【值】或【迭代器】删除：
//
//```cpp
//container.erase(value);
//container.erase(iterator);
//```
//
//** 【无序关联容器】**
//
//| 容器 | 头文件 | 特点 |
//|-- - | -- - | -- - |
//| `std::unordered_set<T>` | `<unordered_set > ` | 基于哈希，元素唯一 |
//| `std::unordered_multiset<T>` | `<unordered_set > ` | 允许重复元素 |
//| `std::unordered_map<K, V>` | `<unordered_map > ` | 基于哈希的键值映射 |
//| `std::unordered_multimap<K, V>` | `<unordered_map > ` | 允许重复键 |
//
//同样通常直接使用：
//
//```cpp
//container.erase(value);
//```
//
//** 【容器适配器】**
//
//| 适配器 | 头文件 | 默认底层容器 |
//|-- - | -- - | -- - |
//| `std::stack<T>` | `<stack > ` | `std::deque<T>` |
//| `std::queue<T>` | `<queue > ` | `std::deque<T>` |
//| `std::priority_queue<T>` | `<queue > ` | `std::vector<T>` |
//
//它们只提供 `push()`、`pop()`、`top() / front()` 等有限接口，通常不能使用 `erase-remove`。
//
//结合前面的 `erase-remove` 方法：
//
//- 适用：`vector`、`deque`、`list`、`basic_string`
//- 不适用：`array`、关联容器、无序关联容器、容器适配器
//- 特殊处理：`forward_list` 使用 `remove()` 或 `erase_after()`