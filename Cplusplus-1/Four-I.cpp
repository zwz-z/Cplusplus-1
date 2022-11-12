#define _CRT_SECURE_NO_WARNINGS

//short months[12];

//#include<iostream>
//int main()
//{
//	using namespace std;
//	int yams[3];
//	yams[0] = 7;
//	yams[1] = 8;
//	yams[2] = 6;
//
//	int yamcosts[3] = { 20, 30, 5 };
//
//	cout << "马铃薯的数量总共是 = ";
//	cout << yams[0] + yams[1] + yams[2] << endl;
//
//	cout << "有 " << yams[1] << " 个马铃薯的那一袋，"
//		<< "马铃薯是 " << yamcosts[1] << " 元一个。\n";
//
//	int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
//	total = total + yams[2] * yamcosts[2];
//
//	cout << "\n数组yams的大小是 " << sizeof yams << " bytes。\n";
//	cout << "数组yams中的一个元素的大小是 " << sizeof yams[0] << " bytes。\n";
//	int num = sizeof yamcosts / sizeof(int);
//
//	return 0;
//}

//#include<iostream>
//int main()
//{
//	using namespace std;
//	//double earnings[4]{ 1.2e4, 1.6e4, 1.1e4, 1.7e4 };
//	//unsigned int counts[10] = {};
//	//float balances[100] {};
//	//long plitfs[] = { 25, 92, 3.0 };
//	char dogs[8] = {'b', 'e','a','u','x',' ', 'I','I'};		//不是字符串
//	char cats[8] = { 'f','a','t','e','s','s','a','\0' };	//是字符串
//	cout << "cats = " << cats << endl;
//	cout << "dogs = " << dogs << endl;
//	return 0;
//}

//char bird[11] = "Mr.Cheeps";	//字符串末尾默认存在一个 \0
//char fish[] = "Bubbles";
//char shirt_size = 'S'; 
//char shirt_size = "S";

//#include<iostream>
//int main()
//{
//	using namespace std;
//
//	cout << "我要给你一块钱。\n";
//	cout << "我要给你" "一块钱。\n";
//	cout << "我要给你"
//		"一块钱。\n";
//
//	return 0;
//}

//#include<iostream>
//int main()
//{
//	using namespace std;
//	const int Size = 15;
//	char name_1[Size];					//空数组
//	char name_2[Size] = "C++writer";	//初始化数组
//
//	cout << "你好！我是 " << name_2;
//	cout << "！你叫什么？\n";
//	cin >> name_1;											//通过输入设备输入字符串
//
//	cout << "不错的名字。" << name_1 << "，你的名字有 ";
//	cout << strlen(name_1) << " 个字，并且被存储\n";		//求字符串长度
//	cout << "在一个有 " << sizeof(name_1) << " 字节的数组内。\n";
//	cout << "你的名字开头是 " << name_1[0] << " 。\n";
//
//	name_2[3] = '\0';					//放置空字符
//	cout << "这是我名字的前3个字符：";
//	cout << name_2 << endl;
//
//	return 0;
//}

//#include<iostream>
//int main()
//{
//	using namespace std;
//	const int ArSize = 20;
//	char name[ArSize];
//	char dessert[ArSize];
//
//	cout << "请输入你的名字：\n";
//	cin >> name;
//	cout << "请输入你喜欢的甜点：\n";
//	cin >> dessert;
//
//	cout << "我有一些 " << dessert << " 要给你，" << name << ".\n";
//
//	return 0;
//}

//#include<iostream>
//int main()
//{
//	using namespace std;
//	const int ArSize = 20;
//	char name[ArSize];
//	char dessert[ArSize];
//
//	cout << "请输入你的名字：\n";
//	cin.getline(name, 20);				//使用getline( )函数
//	cout << "请输入你喜欢的甜点：\n";
//	cin.getline(dessert, 20);			//使用getline( )函数
//
//	cout << "我有一些 " << dessert << " 要给你，" << name << ".\n";
//
//	return 0;
//}

//#include<iostream>
//int main()
//{
//	using namespace std;
//	char str_1[10] = { 0 };
//	char str_2[10] = { 0 };
//
//	cin.get(str_1, 15);		//执行*1
//	cin.get();
//	cin.get(str_2, 15);		//执行*2
//	//cin.get(str_1, 10).get();	//拼接两个类成员函数
//	//cin.get(str_2, 10).get();	//拼接两个类成员函数
//	//cin.getline(str_1, 10).getline(str_2, 10);
//
//
//	cout << str_1 << endl;
//	cout << str_2 << endl;
//
//	return 0;
//}

//#include<iostream>
//int main()
//{
//	using namespace std;
//
//	cout << "请问您的房子已经有几年了？\n";
//	int year = 0;
//	(cin >> year).get();
//	cout << "这套房子的地址是什么？\n";
//	char address[80];
//	cin.getline(address, 80);
//
//	cout << "已建成多久：" << year << endl;
//	cout << "地址：" << address << endl;
//	cout << "完毕。\n";
//
//	return 0;
//}

//#include<iostream>
//#include<string>
//int main()
//{
//	using namespace std;
//	char arr_1[20];
//	char arr_2[20] = "jaguar";		//初始化数组，jaguar：美洲豹
//	string str1;
//	string str2 = "panther";		//初始化string类，panther：黑豹
//
//	cout << "请输入一种猫科动物：";
//	cin >> arr_1;
//	cout << "请输入另一种猫科动物：";
//	cin >> str1;
//
//	cout << "\n现在这里有一些猫科动物：\n";
//	cout << arr_1 << " " << arr_2 << " "
//		<< str1 << " " << str2 << endl << endl;
//
//	cout << arr_2 << " 名字的第三个字母是 " << arr_2[2] << endl;
//	cout << str2 << " 名字的第三个字母是 " << str2[2] << endl;
//
//	return 0;
//}

//#include<iostream>
//#include<string>
//int main()
//{
//	using namespace std;
//	//string str1;
//	//cin >> str1;
//	//string str2 = "panther";
//
//	char firat_ch[] = { "哈哈哈 111 222" };
//	char seconf_ch[] { "Elegant 大象" };
//	string str_1;
//	string str_2 = { "flying to the moon" };
//	str_1 = str_2;
//	
//	string str_3;
//	str_3 = str_1 + str_2;
//	str_1 += str_2;			//将str_2加到str_1的末尾
//
//	return 0;
//}#include<iostream>
//#include<string>
//int main()
//{
//	using namespace std;
//	//string str1;
//	//cin >> str1;
//	//string str2 = "panther";
//
//	char firat_ch[] = { "哈哈哈 111 222" };
//	char seconf_ch[] { "Elegant 大象" };
//	string str_1;
//	string str_2 = { "flying to the moon" };
//	str_1 = str_2;
//	
//	string str_3;
//	str_3 = str_1 + str_2;
//	str_1 += str_2;			//将str_2加到str_1的末尾
//
//	return 0;
//}

//#include<iostream>
//#include<string>
//int main()
//{
//	using namespace std;
//	string s_1 = "penguin";
//	string s_2, s_3;
//
//	cout << "执行操作：s_2 = s_1\n";
//	s_2 = s_1;
//	cout << "s_1：" << s_1 << "  s_2：" << s_2 << endl << endl;
//
//	cout << "执行操作：s_2 = \"buzzard\"\n";
//	s_2 = "buzzard";
//	cout << "s_2：" << s_2 << endl << endl;
//
//	cout << "执行操作：s_3 = s_1 + s_2\n";
//	s_3 = s_1 + s_2;
//	cout << "s_3：" << s_3 << endl << endl;
//
//	cout << "执行操作：s_1 += s_2\n";
//	s_1 += s_2;
//	cout << "s_1：" << s_1 << endl << endl;
//
//	cout << "执行操作：s_2 += \" for a day\"\n";
//	s_2 += " for a day";
//	cout << "s_2：" << s_2 << endl;
//
//	return 0;
//}


//#include<iostream>
//#include<cstring>
//
//int main()
//{
//	using namespace std;
//
//	//strcpy的使用例------
//	char arr_1[20] = "你好";
//	char arr_2[20] = "Hello World";
//	strcpy(arr_1, arr_2);
//	cout << "arr_1：" << arr_1 
//		<< "\t长度 = " << strlen(arr_1) << endl;
//
//	string str_1 = "Warning!";
//
//	int len_1 = str_1.size();
//	int len_2 = strlen(arr_1);
//
//	////strcat的使用例------
//	//char arr_3[10] = "再见！";
//	//char arr_4[20] = "GoodBye!";
//	//strcat(arr_3, arr_4);
//	//cout << "arr_3：" << arr_3 
//	//	<< "\t长度 = " << strlen(arr_3) << endl;
//
//	return 0;
//}

//#include<iostream>
//#include<string>
//#include<cstring>
//int main()
//{
//	using namespace std;
//	char chArr[20];	//未进行初始化的数组其内容是未定义的
//	string str;		//为初始化的string对象长度默认是 0
//
//	cout << "输入前，chArr 中字符串的长度 = " 
//		<< strlen(chArr) << endl;	//此处的输出可能每次都不相同
//	cout << "输入前，str 中字符串的长度 = " 
//		<< str.size() << endl;	
//
//	cout << "\n请输入一行文本：\n";
//	cin.getline(chArr, 20);
//	cout << "你输入了：" << chArr << endl;
//	cout << "请输入另一行文本：\n";
//	getline(cin, str);				//重载，此处没有长度设定
//	cout << "你输入了：" << str << endl;
//
//	cout << "\n输入后，chArr 中字符串的长度 = " 
//		<< strlen(chArr) << endl;
//	cout << "输入后，str 中字符串的长度 = " 
//		<< strlen(chArr) << endl;
//
//	return 0;
//}

//#include<iostream>
//int main()
//{
//	using namespace std;
//	wchar_t title[] = L"super idol";
//	char16_t name[] = u"Aili Young";
//	char32_t car[] = U"Humber Super Snipe";
//
//	//cout << R"(\n 被用作换行符，类似于 endl 。)" << '\n';
//	cout << R"+*("(他是谁？)"，她这么问。)+*" << endl;
//
//	return 0;
//}