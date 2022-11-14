
//#include<iostream>
//const int ArSize = 20;
//int main()
//{
//	using namespace std;
//	char name[ArSize];
//	cout << "请输入一个单词（英文）：";
//	cin >> name;
//
//	cout << "这个单词拥有的字符及其ASCII码是：\n";
//	int i = 0;
//	while (name[i] != 0)
//	{
//		cout << name[i] << ": " << int(name[i]) << endl; 
//		i++;
//	}
//
//	return 0;
//}

//#include<iostream>
//int main()
//{
//	using namespace std;
//
//	int i = 0;
//	for (; ;)
//		cout << i++ << endl;
//
//	return 0;
//}

//#include<ctime>
//int main()
//{
//	long wait = 0;
//	while (wait < 1000000)
//		wait++;
//
//	return 0;
//}

#include<iostream>
#include<ctime>
#define FLOAT_POINTER float*
int main()
{
	using namespace std;
	cout << "请输入需要延迟的时间（单位是秒）：";
	float secs;
	cin >> secs;
	clock_t delay = secs * CLOCKS_PER_SEC;

	cout << "开始计时\a\n";
	clock_t start = clock();
	while (clock() - start < delay);

	cout << "完成\a\n";

	return 0;
}
