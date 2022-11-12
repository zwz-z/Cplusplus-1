
//#include<iostream>
//struct student
//{
//	char name[10];
//	unsigned char address[10];
//	int ID;
//};
//
//int main()
//{
//	using namespace std;
//	student std_1 =
//	{
//		"阳光少年",
//		"xxxsss",
//		1234567
//	};
//	student std_2;
//
//	cout << "std_1：" << "std_1.name = " << std_1.name
//		<< "  std_1.address = " << std_1.address
//		<< "  std_1.ID = " << std_1.ID << endl;
//
//	cout << "std_2 = std_1\n";
//	std_2 = std_1;				//赋值
//
//	cout << "std_2：" << "std_2.name = " << std_2.name
//		<< "  std_2.address = " << std_2.address
//		<< "  std_2.ID = " << std_2.ID << endl;
//
//	return 0;
//}

//int main()
//{
//	//student xiaoMing;
//	//xiaoMing.name;		//访问name成员
//	//xiaoMing.address;	//访问address成员
//	//xiaoMing.ID;		//访问ID成员
//
//	student xiaoHei{};
//
//	return 0;
//}

//#include<iostream>
//struct shopping
//{
//	char name[20];
//	float weight;
//	double price;
//};
//
//int main()
//{
//	using namespace std;
//	shopping list_1 =
//	{
//		"香蕉",		//name成员
//		1.2,			//weight成员
//		12.55			//price成员
//	};
//	shopping list_2 =
//	{
//		"苹果",
//		0.8,
//		10.81
//	};
//
//	cout << "您将要购买这些 " << list_1.name << " 和 " << list_2.name << " 。\n";
//	cout << "请支付 " << list_1.price + list_2.price << " 元。\n";
//
//	return 0;
//}

//struct student
//{
//	char name[10];
//	unsigned char address[10];
//	int ID;
//};
////外部声明
//struct student xiaoMing;    //C语言的结构体声明方式
//student xiaoHong;           //C++的结构声明方式
//
//student xiaoLan =           //可以在声明变量的同时进行初始化
//{
//	"XiaoLan",        //name变量
//	"xxxxxx",         //address变量
//	1213,             //ID变量
//};
//
//student xiaoLv = { "XiaoLv", "acadad", 1234 };
//
//struct teacher
//{
//	char name[20];
//	int bonus;
//}tac_1 =
//{
//	"Alice",
//	5000
//};
//
//struct
//{
//	int x;
//	int y;
//}position;
//
////内部声明
//int main()
//{
//	student liMing;              //在结构声明放在主函数内也是可行的
//	liMing.ID = 12;
//	char x[10] = "Liming";
//	liMing = xiaoLan;
//	return 0;
//}

//#include<iostream>
//struct teacher
//{
//	char name[20];
//	int bonus;
//};
//
//int main()
//{
//	using namespace std;
//	//teacher group_1[100];
//	//cin >> group_1[0].bonus;
//	//cout << group_1[99].name << endl;
//
//	teacher group[2] =
//	{
//		{"小明", 4000},		//初始化第一个元素
//		{"李明", 5000}		//初始化第二个元素
//	};
//
//	cout << "第一位老师是 " << group[0].name << " ，第二位老师是 " << group[1].name
//		<< "\n他们的工资一共是 "
//		<< group[0].bonus + group[1].bonus << " 元。\n";
//
//	return 0;
//}

//#include<iostream>
//struct S
//{
//	char c;	//1个字节
//	int i;		//4个字节
//}s;
//
//int main()
//{
//	using namespace std;
//	struct S s_1 = { 0 };
//	cout << sizeof s_1 << endl;
//
//	return 0;
//}

//struct S_1
//{
//	unsigned int a_1 : 4;	//为 a_1 分配 4个字节 的空间
//	unsigned int : 4;		//不被使用的4个字节的空间
//	bool c_1 : 1;
//	bool d_1 : 1;
//};
//
//S_1 s_1 = { 12, true, false };

//#include<iostream>
////联合类型的声明
//union Un
//{
//	char c;		//1个字节
//	int i;		//4个字节
//};
//
//int main()
//{
//	using namespace std;
//	//联合变量的定义
//	union Un un_1;
//	//计算这个变量的大小
//	//cout << "un_1所占空间的大小是：" << sizeof un_1 << endl;
//	cout << &un_1 << endl;
//	cout << &un_1.c << endl;
//	cout << &un_1.i << endl;
//
//	return 0;
//}

//#include<iostream>
//struct widget
//{
//	char brand[20];
//	int type;
//	union		//此处没有联合体的名字
//	{
//		long id_num;
//		char id_ch[20];
//	};			//匿名联合体
//};
//
//int main()
//{
//	using namespace std;
//	widget prize;
//	//省略中间代码
//	if (prize.type == 1)	
//		cin >> prize.id_num;
//	else
//		cin >> prize.id_ch;
//
//	return 0;
//}
//int main()
//{
//	using namespace std;
//	widget prize;
//
//	cout << "请选泽要输入的商品信息：";
//	cin >> prize.type;
//
//	cout << "请输入对应商品的信息：";
//	if (prize.type == 1)
//		cin >> prize.id_val.id_num;
//	else
//		cin >> prize.id_val.id_ch;
//
//	cout << "输入完毕。\n";
//
//	return 0;
//}
//

//enum color
//{
//	red,		//对应值：0
//	orange,		//对应值：1
//	yellow,		//对应值：2
//	green,		//对应值：3
//	blue,		//对应值：4
//	violet,		//对应值：5
//	indigo,		//对应值：6
//	untraviolet	//对应值：7
//};
//
//int main()
//{
//	color band;
//
//	//可执行
//	int col = blue;	//枚举量blue可以转换成int类型
//	col = 3 + red;
//	band = color(2323);	//该结果未被定义
//
//	////不可执行
//	band = 3;			//int类型无法转换成枚举量
//
//	return 0;
//}
//
////int main()
////{
////	color band;			
////
////	band = orange;
////	++band;
////
////	band = orange + red;
////
////	return 0;
////}

//enum bits { one = 1, two = 2, four = 4, eight = 8 };
//enum bigstep { first, second = 100, third };
//enum {zero, null = 0, one, numero_uno = 1};

//enum bits { one = 1, two = 2, four = 4, eight = 8 };
//
//int main()
//{
//	bits myFlag;
//	myFlag = bits(2000);		//赋值合法，6 位于该枚举的范围内
//
//	return 0;
//}