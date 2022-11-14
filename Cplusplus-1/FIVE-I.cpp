
//#include<iostream>
//int main()
//{
//	using namespace std;
//	int i;
//	for (i = 0; i < 5; i++)
//		cout << "第 " << i + 1 << " 次循环。\n";
//	cout << "循环结束。\n";
//	return 0;
//}

//#include<iostream>
//int main()
//{
//	using namespace std;
//
//	cout << "请输入倒数开始的数字：";
//	int limit;
//	cin >> limit;
//
//	int i = 0;
//	for (i = limit; i; i--)
//	{
//		cout << "i = " << i << "\n";
//	}
//	cout << "现在i的值为 " << i << "\n";
//
//	return 0;
//}

//#include<iostream>
//int main()
//{
//	using namespace std;
//	int x = 0;
//
//	cout << "表达式 x = 100 的值是 ";
//	cout << (x = 100) << endl;
//	cout << "此时 x = " << x << endl << endl;
//
//	cout << "表达式 x < 3 的值是 ";
//	cout << (x < 3) << endl;
//	cout << "表达式 x > 3 的值是 ";
//	cout << (x > 3) << endl << endl;
//
//	cout.setf(ios_base::boolalpha);		//使用标记，命令cout输出true和false
//
//	cout << "表达式 x < 3 的值是 ";
//	cout << (x < 3) << endl;
//	cout << "表达式 x > 3 的值是 ";
//	cout << (x > 3) <\< endl << endl;
//
//	return 0;
//}

//#include<iostream>
//int main()
//{
//	for (int i = 0; i < 5; i++)
//		std::cout << i << std::endl; 
//
//	std::cout << i;
//
//	return 0;
//}

//#include<iostream>
//const int ArSize = 16;					//全局变量的声明
//int main()
//{
//	long long f[ArSize];
//	f[1] = f[0] = 1LL;					//long long类型的 1
//
//	for (int i = 2; i < ArSize; i++)	//计算
//		f[i] = i * f[i - 1];
//
//	for (int i = 0; i < ArSize; i++)	//打印
//		std::cout << i << "! = " << f[i] << std::endl;
//
//	return 0;
//}

//#include<iostream>
//int main()
//{
//	using std::cout;	//一个using声明
//	using std::cin;
//	using std::endl;
//
//	cout << "请输入循环的步长：";
//	int by;
//	cin >> by;
//
//	cout << "以 " << by << " 为步长进行循环：\n";
//	for (int i = 0; i < 100; i = i + by)
//		cout << i << endl;
//
//	return 0;
//}

//#include<iostream>
//#include<string>
//int main()
//{
//	using namespace std;
//
//	cout << "请输入一个(英文)单词：";
//	string word;
//	cin >> word;
//
//	cout << "按照逆序打印字符串：";
//	for (int i = word.size() - 1; i >= 0; i--)
//		cout << word[i];
//	cout << "\n打印结束。\n";
//	
//	return 0;
//}

//#include<iostream>
//int main()
//{
//	using std::cout;
//	int a = 20;
//	int b = 20;
//
//	cout << "a   = " << a << "，  b = " << b << "\n";
//	cout << "a++ = " << a++ << "，++b = " << ++b << "\n";
//	cout << "a   = " << a << "，  b = " << b << "\n";
//
//	return 0;
//}

//#include<iostream>
//int main()
//{
//	using namespace std;
//	int guests = 0;
//
//	while (guests++ < 10)
//		cout << guests << endl;
//}

//int main()
//{
//	int arr[5] = { 32, 241, 123, 16, 5 };
//	int* pt = arr;		//此时指针pt指向数组arr的首元素的地址，即指向arr[0]，解引用得到 32
//	++pt;				//此时指针pt指向arr[1]，解引用得到 241 
//
//	return 0;
//}

//int main()
//{
//	//变量
//	int k = 5;
//	k += 3;					//k的值变为 8
//
//	//数组
//	int* pa = new int[10];	//pa指向 pa[0] 所在位置
//	pa[4] = 12;
//	pa[4] += 6;				//pa[4]的值变为 18
//
//	//解引用
//	*(pa + 4) += 7;			//pa[4]的值变为 25
//
//	//指针
//	pa += 2;				//指针pa指向 pa[2] 所在位置
//
//	return 0;
//}

//#include<iostream>
//int main()
//{
//	using namespace std;
//
//	cout << "请输入5个数字：\n";
//	double number;
//	double sum = 0.0;
//	for (int i = 1; i <= 5; i++)
//	{
//		cout << "第" << i << "个数字：";
//		cin >> number;
//		sum += number;
//	}
//
//	cout << endl << "5个数字之和 = " << sum << endl;
//	cout << "5个数字的平均值 = " << sum / 5 << endl;
//
//	return 0;
//}

//#include<iostream>
//int main()
//{
//	using namespace std;
//	int x = 20;
//	
//	{					//包裹了一个语句块
//		int y = 100;
//		cout << x << endl;
//		cout << y << endl;
//	}					//y的生命周期结束
//
//	cout << x << endl;
//	cout << y << endl;
//
//	return 0;
//}

//#include<iostream>
//int main()
//{
//	using namespace std;
//	int x = 20;
//	{
//		cout << x << endl;
//		int x = 10;			//新申请的变量
//		cout << x << endl;
//	}
//	cout << x << endl;
//
//	return 0;
//}

//#include<iostream>
//#include<string>
//int main()
//{
//	using namespace std;
//	cout << "请输入一个单词(英文)：";
//	string word;
//	cin >> word;
//
//	char temp;
//	for (int j = 0, i = word.size() - 1; j < i; --i, ++j)
//	{
//		temp = word[i];
//		word[i] = word[j];
//		word[j] = temp;
//	}
//	cout << word << "\n程序执行完毕。\n";
//
//	return 0;
//}

//#include<iostream>
//int main()
//{
//	using namespace std;
//	int x = 0;
//	int y = 0;
//
//	for (x = 20; x > 5; x--);			//循环，直到 x 小于等于 5
//	for (x = 1; y != x; ++x);			//循环，直到 y 等于 x
//	for (cin >> x; x == 0; cin >> x);	//循环，直到 x 接受的值为 0
//
//	return 0;
//}

//#include<iostream>
//int main()
//{
//	using namespace std;
//	int scores[10] = { 20, 20, 20, 20, 20, 19, 20, 18, 20, 20 };
//
//	int i;
//	cout << "正确的操作符使用：\n";
//	for (i = 0; scores[i] == 20; i++)
//		cout << "scores " << i << "是20\n";
//
//	cout << "\n错误的操作符使用：\n";
//	for (i = 0; scores[i] = 20; i++)
//		cout << "scores " << i << "是20\n";
//
//	return 0;
//}

//#include<iostream>
//#include<cstring>			//包含函数strcmp()
//int main()
//{
//	using namespace std;
//	char word[5] = "?ate";
//
//	for (char ch = 'a';  strcmp(word, "mate"); ch++)
//	{
//		cout << word << endl;
//		word[0] = ch;
//	}
//	cout << "循环结束，word = " << word << endl;
//
//	return 0;
//}

//#include<iostream>
//#include<string>
//int main()
//{
//	using namespace std;
//	string word = "?ate";
//	for (char ch = 'a'; word != "mate"; ch++)
//	{
//		cout << word << endl;
//		word[0] = ch;
//	}
//	cout << "循环结束，word = " << word << endl;
//
//	return 0;
//}