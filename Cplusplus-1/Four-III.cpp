#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//int main()
//{
//	using namespace std;
//	int a_1 = 6;
//	double b_1 = 4.5;
//
//	cout << "变量a_1的值 = " << a_1;
//	cout << "\t\t对应的地址 = " << &a_1 << endl;
//
//	cout << "变量b_1的值 = " << b_1;
//	cout << "\t对应的地址 = " << &b_1 << endl;
//
//	return 0;
//}

//#include<iostream>
//int main()
//{
//	using namespace std;
//
//	int into = 12;	//将值12存储在变量into中
//	int* mainly;
//	mainly = &into;	//将变量into的地址存储在变量mainly中
//
//	cout << "①表示into的地址：";
//	cout << "\n&into      = " << mainly;
//	cout << "\nmainly     = " << mainly;
//
//	cout << "\n\n②表示into内部存储的值：";
//	cout << "\ninto       =" << into;
//	cout << "\n*mainly    =" << *mainly;	//使用 *运算符 找到指针指向地址内存储的值 
//
//	cout << "\n\n③若 *mainly = *mainly + 1：";
//	*mainly = *mainly + 1;
//	cout << "\n此时into   = " << into << endl;
//
//	return 0;
//}

//#include<iostream>
//int main()
//{
//	using namespace std;
//	int a_1 = 5;
//	int* a_p = &a_1;
//
//	cout << "a_1的值   = " << a_1 << endl;
//	cout << "a_1的地址 = " << &a_1 << endl << endl;
//
//	cout << "*a_p的值 = " << *a_p << endl;
//	cout << "a_p的值  = " << a_p << endl;
//
//	return 0;
//}

//int* fellow;
//*fellow = 232323;	//fellow指向了未知的、还未开辟的地址

//int main()
//{
//	int* pt;
//	pt = (int*)0xB80000000;
//
//	return 0;
//}


//#include<iostream>
//int main()
//{
//	using namespace std;
//	int nights = 1001;
//	int* pt = new int;			//在堆区开辟一个int类型大小的空间
//	*pt = 1001;
//
//	cout << "nights的值 = " << nights
//		<< "\t地址 = " << &nights << endl;
//	cout << "*pt的值    = " << *pt
//		<< "\t地址 = " << pt << endl;
//
//	double* pd = new double;	//在堆区开辟一个double类型大小的空间
//	*pd = 10000001.0;			//存储一个double类型的值
//
//	cout << "\n*pd的值    = " << *pd << endl;
//	cout << "指针pd指向的地址 = " << pd << endl;
//	cout << "存储指针pd的地址 = " << &pd << endl;
//
//	cout << "\npt的大小 = " << sizeof(pt)
//		<< "\t*pt的大小 = " << sizeof(*pt) << endl;
//	cout << "pd的大小 = " << sizeof(pd)
//		<< "\t*pd的大小 = " << sizeof(*pd) << endl;
//
//	delete pd;		//记得释放通过new开辟的空间
//	return 0;
//}

//#include<iostream>
//int main()
//{
//	using namespace std;
//	//int a = 0;
//	//int* pa = &a;
//	//delete pa;		//不成立，pa指向的内存空间不是通过new在堆上开辟的
//
//	int* ps = new int;
//	int* pq = ps;		//pq 和 ps 指向的是同一块空间
//	delete pq;			//通过第二个指针pq进行删除
//
//	int* psome = new int[10];
//	cout << psome[0] << "  " << psome[1] << endl;
//	delete[] psome;
//
//	return 0;
//}

//#include<iostream>
//int main()
//{
//	using namespace std;
//	double* p3 = new double[3];		//创建一个可以存储3个double类型的动态数组
//	p3[0] = 0.2;
//	p3[1] = 0.5;
//	p3[2] = 0.8;
//
//	cout << "p3[1] 的值 = " << p3[1] << endl;
//
//	cout << endl << "当 p3 = p3 + 1 ：" << endl;
//	p3 = p3 + 1;					//指针指向数组的下一个元素
//	cout << "    p3[0] 的值 = " << p3[0] << endl
//		<< "    p3[1] 的值 = " << p3[1] << endl;
//
//	p3 = p3 - 1;					//指针重新指向数组首元素
//	delete[] p3;					//释放内存
//	return 0;
//}

//#include<iostream>
//int main()
//{
//	using namespace std;
//	short stacks[3] = { 3, 2, 1 };
//	double wages[3] = { 10000.0, 20000.0, 30000.0 };
//
//	//两种获得数组地址的方式
//	double* pw = wages;			//数组名就是数组首元素的地址
//	short* ps = &stacks[0];		//使用地址运算符（&）
//
//	//使用数组元素
//	cout << "pw = " << pw << "，*pw = " << *pw << endl;
//	pw = pw + 1;
//	cout << "将 pw + 1：\n";
//	cout << "pw = " << pw << "，*pw = " << *pw << "\n\n";
//
//	cout << "ps = " << ps << "，*ps = " << *ps << endl;
//	ps = ps + 1;
//	cout << "将 ps + 1：\n";
//	cout << "ps = " << ps << "，*ps = " << *ps << "\n\n";
//
//	cout << "通过下标访问元素\n";
//	cout << "stacks[0] = " << stacks[0]
//		<< "，stacks[1] = " << stacks[1] << endl;
//	cout << "通过指针访问元素\n";
//	cout << "*stacks = " << *stacks
//		<< "  ，*(stacks + 1) = " << *(stacks + 1) << endl;
//
//	cout << "\n数组wages的大小 = " << sizeof(wages);
//	cout << "\n指针pw的大小    = " << sizeof(pw) << endl;
//
//	return 0;
//}

//#include<iostream>
//int main()
//{
//	using namespace std;
//	short tell[10];
//	cout << tell << endl;		//将打印数组首元素的地址
//	cout << &tell << endl;		//将打印整个数组的地址
//
//	short(*pas)[10] = &tell;
//
//	return 0;
//}

//#include<iostream>
//int main()
//{
//	using namespace std;
//	char flower[10] = "玫瑰";
//	cout << flower << " 是红色的。\n";
//
//	return 0;
//}

//#include<iostream>
//#include<cstring>			//包含了函数strlen( )，strcpy( )
//int main()
//{
//	using namespace std;
//	char animal[20] = "bear";
//	const char* bird = "wren";
//	char* ps;				//此时，ps内部存储信息尚不明了，如果打印，可能出现乱码
//
//	cout << animal << " 和 " << bird << "\n";	//输出 指针与 数组 内存储的字符串
//
//	cout << "\n请输入一种动物（用英文）：";
//	cin >> animal;			//可以输入的字符串长度不超过20个字节
//							//此时语句 cin >> ps; 是不成立的，因为ps指向的空间仍不确定
//
//	ps = animal;
//	cout <<"你输入了：" << ps << "。\n";	//和使用数组animal的效果是一样的
//	cout << "\n在使用函数strcpy( )之前：\n";
//	cout << animal << " （animal）的内存地址是 " << (int*)animal << endl;
//	cout << ps << "     （ps）的内存地址是 " << (int*)ps << endl;
//
//	ps = new char[strlen(animal) + 1];			//在堆上为指针ps申请了一块空间
//
//	strcpy(ps, animal);		//将ps指向的字符串复制到数组animal后面
//	cout << "\n在使用函数strcpy( )之后：\n";
//	cout << animal << " （animal）的内存地址是 " << (int*)animal << endl;
//	cout << ps << "     （ps）的内存地址是 " << (int*)ps << endl;
//
//	delete[]ps;				//归还从堆上开辟的地址
//	return 0;
//}

//#include<iostream>
//#include<cstring>
//int main()
//{
//	using namespace std;
//	char food[10] = { 0 };			//初始化为空
//	strcpy(food, "Hello world!!");	//"Hello world!!"共13个字符，13 > 10
//
//	return 0;
//}

//#include<iostream>
//struct things
//{
//	int good;
//	int bad;
//};
//
//int main()
//{
//	using namespace std;
//	things th_1 = { 123, 321 };
//	things* pth = &th_1;			//指向结构th_1的指针
//
//	cout << "通过成员运算符 (.) 访问结构的成员";
//	cout << "\nth_1.good = " << th_1.good;
//	cout << "\nth_1.bad  = " << th_1.bad;
//
//	cout << "\n\n通过箭头成员运算符 (->) 访问结构的成员";
//	cout << "\npth->good = " << pth->good;
//	cout << "\npth->bad  = " << pth->bad << "\n";
//
//	return 0;
//}

//#include<iostream>
//#include<cstring>		//其实，string.h 也可以
//using namespace std;
//char* getname();
//
//int main()
//{
//	char* name;
//
//	name = getname();	//调用函数getname获得字符串的地址
//	cout << name << " 的地址是 " << (int*)name << "\n\n";
//	delete[] name;		//释放内存
//
//	name = getname();	//调用函数getname获得字符串的地址
//	cout << name << " 的地址是 " << (int*)name << "\n\n";
//	delete[] name;		//再次释放内存
//
//	return 0;
//}
//
//char* getname()			//返回一个char类型的指针
//{
//	char temp[80];		//暂时性存储
//
//	cout << "请输入最新的名字：";
//	cin >> temp;
//	char* pn = new char[strlen(temp) + 1];
//	strcpy(pn, temp);	//将字符串拷贝到一块更小的内存空间内
//
//	return pn;			//当函数结束时，数组temp的生命周期结束，其占用的空间返回系统
//}

//#include<iostream>
//struct S1
//{
//	int year;
//	char data;
//};
//
//int main()
//{
//	S1 s_01, s_02, s_03;
//
//	S1* pa = &s_02;
//
//	S1 sArr[3];
//	sArr[0].data = 'I';
//	(sArr + 1)->year = 2001;
//
//	s_01.year = 2000;
//	s_01.data = 'I';
//	s_02.year = 2001;
//	s_02.data = 'II';
//	s_03.year = 2002;
//	s_03.data = 'III';
//
//	const S1* arp[3] = { &s_01, &s_02, &s_03 };
//	std::cout << arp[1]->data << std::endl;
//
//	const S1** ppa = arp;
//	auto ppb = arp;
//
//	std::cout << (*ppa)->year << std::endl;
//	std::cout << (*(ppb + 1))->year << std::endl;
//
//	return 0;
//}

//#include<iostream>
//#include<vector>
//
//int main()
//{
//	using namespace std;
//
//	vector<int> vi;			//创建一个int类型的数组，长度为0
//
//	int n = 0;
//	cin >> n;
//	vector<double>vd(n);	//创建一个double类型的数组，长度为n
//
//	return 0;
//}

//#include<iostream>
//#include<array>
//
//int main()
//{
//	using namespace std;
//	array<int, 5> ai;		//创建一个array类，类型是int，长度是5
//	array<double, 4> ad = { 1.2, 3.1, 3.1416, 4.3 };	
//
//	return 0;
//}