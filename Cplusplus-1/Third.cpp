//#include<iostream>
//#include<climits>

//int main()
//{
//	using namespace std;
//	int n_int = INT_MAX;
//	short n_short = SHRT_MAX;
//	long n_long = LONG_MAX;
//	long long n_llong = LLONG_MAX;
//
//	cout << "int类型的所占空间大小是" << sizeof(int) << "bytes。" << endl;
//	cout << "short类型的所占空间大小是" << sizeof n_short << "bytes。" << endl;
//	cout << "long类型的所占空间大小是" << sizeof n_long << "bytes。" << endl;
//	cout << "long long类型的所占空间大小是" << sizeof n_llong << "bytes。" << endl;
//	cout << endl;
//	cout << "能存储的最大值：" << endl;
//	cout << "int：" << n_int << endl;
//	cout << "short：" << n_short << endl;
//	cout << "long：" << n_long << endl;
//	cout << "long long：" << n_llong << endl;
//	cout << endl;
//	cout << "int类型能存储的最小值 = " << INT_MIN << endl;
//	cout << "每个字节对应位的数量 = " << CHAR_BIT << endl;
//	return 0;
//}

//int main()
//{
//	using namespace std;
//
//	int n_d = 1010;
//	int n_e(343);
//}

//#include<iostream>
//#include<climits>
//#define ZERO 0
//int main()
//{
//	using namespace std;
//
//	short sh = SHRT_MAX;
//	unsigned short un_sh = sh;
//	cout << "short_MAX \t= " << sh 
//		<< "\t\tunsigned_short_MAX \t= " << un_sh << endl;
//
//	sh = sh + 1;
//	un_sh = un_sh + 1;
//	cout << "short_MAX + 1 \t= " << sh 
//		<< "\tunsigned_short_MAX + 1 \t= " << un_sh << endl;
//
//	sh = ZERO;
//	un_sh = ZERO;
//	cout << "short_ZERO \t= " << sh 
//		<< "\t\tunsigned_short_ZERO \t= " << un_sh << endl;
//
//	sh = sh - 1;
//	un_sh = un_sh - 1;
//	cout << "short_ZERO - 1 \t= " << sh 
//		<< "\t\tunsigned_short_ZERO - 1\t= " << un_sh << endl;
//	return 0;
//}

//#include<stdio.h>
//#define ZERO 0
//int main()
//{
//	short sh = ZERO;
//	unsigned short un_sh = ZERO;
//
//	sh = sh - 1;
//	un_sh = un_sh - 1;
//	return 0;
//}

//#include<iostream>
//
//int main()
//{
//	using namespace std;
//	int a = 42;
//	int b = 0x42;
//	int c = 042;
//
//	cout << "a = " << a << " (十进制的42)\n";
//	cout << "c = " << c << " (八进制的42)\n";
//	cout << "b = " << b << " (十六进制的42)\n";
//	return 0;
//}

//#include<iostream>
//
//int main()
//{
//	using namespace std;
//	int a = 42;
//	int b = 42;
//	int c = 42;
//
//	cout << "a = " << a << " (将42以十进制形式输出)" << endl;
//
//	cout << oct;
//	cout << "b = " << b << " (将42以八进制形式输出)" << endl;
//
//	cout << hex;
//	cout << "c = " << c << " (将42以十六进制形式输出)" << endl;
//	return 0;
//}

//#include<iostream>
//
//int main()
//{
//	using namespace std;
//	char ch;
//
//	cout << "请输入一个字符: ";
//	cin >> ch;
//	cout << "被输入的字符是 " << ch << endl;
//	return 0;
//}

//#include<iostream>
//
//int main()
//{
//	using namespace std;
//	char ch = 'M';
//	int i = ch;
//	cout << "在ASCII中 " << ch << " 的编码是 " << i << endl;
//
//	cout << "---将这个字符的编码+1---" << endl;
//	ch = ch + 1;
//	i = ch;
//	cout << "在ASCII中 " << ch << " 的编码是 " << i << endl;
//
//	cout << "使用 cout.put() 来展示字符ch: ";
//	cout.put(ch);
//	//展示一个字符常量
//	cout.put('!');
//	cout << endl;
//	return 0;
//}

//#include<iostream>
//
//int main()
//{
//	using namespace std;
//	char alarm = '\a';
//
//	cout << alarm << "起床啦!\a\n";
//	cout << "快点，\"大懒虫\"！再不起床……\n就要迟到了！\n";
//}

//#include<iostream>
//
//int main()
//{
//	using namespace std;
//	int n_\u00F6_name = 0;
//	cout << "g\u00E2teau\n";
//	return 0;
//}

//#include<iostream>
//int main()
//{
//	using namespace std;
//	int n_Int = 9;
//	float* f_Float = (float*)&n_Int;		//通过强制类型转换，强行将int类型的值赋给float变量
//	
//	cout << "n_Int\t= " << n_Int << "\nf_Float = " << *f_Float << endl << endl;
//
//	*f_Float = 0.9;						//将float变量的值改为 9.0
//	cout << "n_Int\t= " << n_Int << "\nf_Float = " << *f_Float << endl << endl;
//	return 0;
//}

//#include<cfloat>
//int main()
//{
//	float f = 8.33E2;
//	return 0;
//}

//#include<iostream>
//
//int main()
//{
//	using namespace std;
//
//	cout.setf(ios_base::fixed, ios_base::floatfield);	//使用了ostream方法setf()
//	float A_a = 10.0 / 3.0;
//	double B_b = 10.0 / 3.0;
//	const float million = 1.0e6;
//
//	cout << "A_a = " << A_a;
//	cout << "，million * A_a = " << million * A_a << "，";
//	cout << "\n10 * million * A_a = " << 10 * million * A_a << "\n\n";
//
//	cout << "B_b = " << B_b;
//	cout << "，million * B_b = " << million * B_b << "\n";
//	return 0;
//}

//#include<iostream>
//
//int main()
//{
//	using namespace std;
//	float a = 2.34E+22f;
//	float b = a + 1.0f;
//
//	cout << "a     = " << a << endl;
//	cout << "b - a = " << b - a << endl;
//	return 0;
//}

#include<iostream>

//int main()
//{
//	using namespace std;
//	float A_a = 0;
//	float B_b = 0;
//
//	cout.setf(ios_base::fixed, ios_base::floatfield);	//强制显示小数点后六位
//	cout << "请输入A_a对应的数字: ";
//	cin >> A_a;
//	cout << "请输入b对应的数字: ";
//	cin >> B_b;
//
//	cout << "\nA_a = " << A_a << "，B_b = " << B_b << endl;
//	cout << "A_a + B_b = " << A_a + B_b << endl;
//	cout << "A_a - B_b = " << A_a - B_b << endl;
//	cout << "A_a * B_b = " << A_a * B_b << endl;
//	cout << "A_a / B_b = " << A_a / B_b << endl;
//	return 0;
//}

//#include<iostream>
//
//int main()
//{
//	using namespace std;
//	
//	cout.setf(ios_base::fixed, ios_base::floatfield);
//	cout << "整数除法  ：9/5     = " << 9 / 5 << endl;			//舍弃小数位数
//	cout << "浮点数除法：9.0/5.0 = " << 9.0 / 5.0 << endl;
//	cout << "混合型除法：9.0/5   = " << 9.0 / 5 << endl;
//	cout << endl;
//	cout << "双精度浮点型：1e7/9.0     = " << 1e7 / 9.0 << endl;
//	cout << "单精度浮点型：1e7f/9.0f   = " << 1e7f / 9.0f << endl;
//	return 0;
//}

//#include<iostream>
//
//int main()
//{
//	using namespace std;
//	const int con = 14;
//	int pounds = 0;
//
//	cout << "请输入重量（单位：磅）: ";
//	cin >> pounds;
//	int stone = pounds / con;
//	int remain = pounds % con;
//	cout << pounds << "磅 = " << stone << "石余" << remain << "磅\n";
//
//	return 0;
//}

//#include<iostream>
//
//int main()
//{
//	using namespace std;
//	short thi = 120;
//	long fir = thi;
//
//	return 0;
//}

//#include<iostream>
//
//int main()
//{
//	using namespace std;
//
//	cout.setf(ios_base::fixed, ios_base::floatfield);
//	float A_a = 3;			//int类型转换成float类型
//	int B_b(3.9832);		//double类型转换成int类型
//	int C_c = 7.2E12;		//C_c的结果是未定义的
//	cout << "A_a = " << A_a << endl;
//	cout << "B_b = " << B_b << endl;
//	cout << "C_c = " << C_c << endl;
//}

//#define y 31325
//int main()
//{
//	//被允许的情况
//	const int code = 66;
//	int x = 66;
//	char c1 = { 66 };
//	char c2{ code };
//	char c3 = y;			//会发生截断
//	char c4{ 31325 };		//char类型所占存储空间过小，无法存储，需要收缩转换
//
//	//不被允许的情况
//	char c5 = { x };		//x不是一个常量
//}

//int main()
//{
//	short a = 20;
//	short b = 30;
//	static_cast<long> (b);
//	short c = a + b;
//	return 0;
//}

//#include<iostream>
//
//int main()
//{
//	using namespace std;
//	int A_a, B_b, C_c;
//
//	A_a = 19.99 + 11.99;
//	B_b = (int)19.99 + (int)11.99;
//	C_c = int(19.99) + int(11.99);
//	cout << "A_a = " << A_a << endl;
//	cout << "B_b = " << B_b << endl;
//	cout << "C_c = " << C_c << endl;
//	cout << endl;
//
//	char ch = 'Z';
//	cout << ch << " 的编码是 " << int(ch) << endl;
//	cout << ch << " 的编码就是 " << static_cast<int>(ch) << endl;
//	return 0;
//}

//#include<iostream>
//
//int main()
//{
//	using namespace std;
//	cout.setf(ios_base::fixed, ios_base::floatfield);
//	cout << "Hello"[1] << endl;
//	char grade = 65;
//	cout << grade << endl;
//	long long A = 123456789122456;
//	double B = A;
//	cout << B;
//	return 0;
//}

//#include<iostream>
//
//int main()
//{
//	using namespace std;
//	double A_a = 12.99;
//	double B_b = 9.56;
//	int C_c = (int)A_a + (int)B_b;
//	int D_d = A_a + B_b;
//	cout << C_c << endl;
//	cout << D_d << endl;
//	return 0;
//}

//#include<iostream>
//
//int main()
//{
//	using namespace std;
//
//	cout << "请输入您的身高 ";
//	int inch = 0;
//	cout << "首先请输入英尺: ";
//	cin >> inch;
//	int foot = 0;
//	cout << "再输入英寸: ";
//	cin >> foot;
//	cout << "请输入您的体重（单位：磅）: ";
//	int pound = 0;
//	cin >> pound;
//
//	const float con_h = 12;
//	const float con_w = 2.2;
//	const float con_m = 0.0254;
//	float height = (float)inch + (float)foot / con_h;
//	float weight = (float)pound / con_w;
//
//	cout << "您的身高是: " << height << "英尺\n";
//
//	float meter = height * con_m;
//	cout << "IBM = " << weight / meter * meter;
//	const int con = 12;
//
//	return 0;
//}

//#include<iostream>
//
//int main()
//{
//	using namespace std;
//	long sec = 0;
//	cout << "请输入秒数: ";
//	cin >> sec;
//
//	int day_1 = sec / (24 * 60 * 60);
//	int hour_1 = (sec % (24 * 60 * 60)) / (60 * 60);
//	int min_1 = 
//
//
//	cout << sec << " seconds = " << day_1 << " days, "
//		<< hour_1 << "hours, " << min_1 << "minutes, "
//		<< sec_1 << "sceonds";
//	return 0;
//}

//#include<iostream>
//
//int main()
//{
//	using namespace std;
//	double Eu = 0;
//	double Us = 0;
//	
//	cout << "请输入欧洲风格的耗油量: ";
//	cin >> Eu;
//	cout << "美国风格的耗油量: " << 62.14 / (Eu / 3.875);
//	return 0;
//}