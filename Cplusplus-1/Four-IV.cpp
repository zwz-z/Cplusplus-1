#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<array>
//
//int main()
//{
//	using namespace std;
//
//	double a_1[4] = { 1.2, 2.4, 3.6, 4.8 };	//ԭʼ����������
//
//	vector<double> a_2(4);	//����һ����ʼ���԰���4��Ԫ�ص�vector����
//	//C98��û�г�ʼ��vector�Ŀ�ݷ�ʽ
//	a_2[0] = 1.0 / 3.0;
//	a_2[1] = 1.0 / 5.0;
//	a_2[2] = 1.0 / 7.0;
//	a_2[3] = 1.0 / 9.0;
//
//	//C++11������������ʼ��array����
//	array<double, 4> a_3 = { 3.14, 2.72, 1.62, 1.41 };
//	array<double, 4> a_4;
//	a_4 = a_3;				//���ִ���ʽ�ڴ�С��ͬ��array�����п��Գ���
//
//	//ʹ��array����
//	cout << "a_1[2]��" << a_1[2] << "\t ���ַΪ " << &a_1[2] << endl;
//	cout << "a_2[2]��" << a_2[2] << " ���ַΪ " << &a_2[2] << endl;
//	cout << "a_3[2]��" << a_3[2] << "\t ���ַΪ " << &a_3[2] << endl;
//	cout << "a_4[2]��" << a_4[2] << "\t ���ַΪ " << &a_4[2] << endl;
//
//	//����Ĵ洢����
//	cout << endl << "���в�����a_1[2] = 20.2;" << endl;
//	a_1[-2] = 20.2;
//	cout << "�����������ᵼ�£�" << endl;
//	cout << "\ta_1[-2]��" << a_1[-2] << "\t���ַΪ " << &a_1[-2] << endl;
//	cout << "\ta_3[2] ��" << a_3[2] << "\t���ַΪ " << &a_3[2] << endl;
//	cout << "\ta_4[2] ��" << a_4[2] << "\t���ַΪ " << &a_4[2] << endl;
//
//	a_2.at(1) = 2.3;	//��2.3���뵽a_2[1]��
//
//	return 0;
//}

//#include<iostream>
//
//int main()
//{
//	using namespace std;
//	//int n = 0;
//
//	//cin >> n;
//	//double* a = new double[n];
//
//	cout << (int*)"Hone" << endl;
//
//	//delete[] a;
//
//	return 0;
//}

//#include<iostream>
//int main()
//{
//	using namespace std;
//
//	cout << "�������ķ����Ѿ��м����ˣ�\n";
//	int year = 0;
//	cin >> year;                    //��������
//	cout << "���׷��ӵĵ�ַ��ʲô��\n";
//	char address[80];
//	cin >> address;       //�����ַ���
//
//	cout << "�ѽ��ɶ�ã�" << year << endl;
//	cout << "��ַ��" << address << endl;
//	cout << "��ϡ�\n";
//
//	return 0;
//}

//#include<iostream>
//#include<string>
//#include<vector>
//#include<array>
//int main()
//{
//	//const int x = 10;
//	//std::vector<std::string>a_1(x);
//	//std::array<std::string, 10>arr;
//
//
//	char b[20] = { 0 };
//	char c[20] = { 0 };
//	std::cout << "������֣�";
//	std::cin.getline(b, 20);
//	std::cout << "��ĵ�ַ��";
//	std::cin.getline(c, 20);
//
//	std::string a = "0";
//	std::cin >> a;
//	std::cout << a << std::endl;
//	a[0] += 1;
//	std::cout << a << std::endl;
//
//	return 0;
//}

//#include<iostream>
//#include<cstring>
//int main()
//{
//	using namespace std;
//	char a[20] = { 0 };
//	char b[20] = { 0 };
//	char c[20] = { 0 };
//
//	cout << "��������ĵ�һ�����֣�";
//	cin >> a;
//	cout << "��������ĵڶ������֣�";
//	cin >> b;
//
//	strncpy(c, a, 19);
//	strncat(c, ",", 19);
//	strncat(c, b, 19);
//
//	cout << "string��" << c << endl;
//
//	return 0;
//}

//#include<iostream>
//struct S
//{
//	char name[20];
//	float weight;
//	int ka;
//};
//
//int main()
//{
//	using namespace std;
//	//S snack = { "Mo aS", 2.3, 50 };
//	//cout << snack.ka << endl;
//	//cout << snack.name << endl;
//	//cout << snack.weight << endl;
//
//
//	S sp[3] = { 0 };
//	sp[0].ka = 12;
//	cout << sp[0].ka << endl;
//	cin >> sp[1].name;
//	cout << sp[1].name << endl;
//
//	S* a = new S;
//	a->weight = 1.3;
//	cout << a->weight << endl;
//
//	delete a;
//	return 0;
//}#include<iostream>
//struct S
//{
//	char name[20];
//	float weight;
//	int ka;
//};
//
//int main()
//{
//	using namespace std;
//	//S snack = { "Mo aS", 2.3, 50 };
//	//cout << snack.ka << endl;
//	//cout << snack.name << endl;
//	//cout << snack.weight << endl;
//
//
//	S sp[3] = { 0 };
//	sp[0].ka = 12;
//	cout << sp[0].ka << endl;
//	cin >> sp[1].name;
//	cout << sp[1].name << endl;
//
//	S* a = new S;
//	a->weight = 1.3;
//	cout << a->weight << endl;
//
//	delete a;
//	return 0;
//}

//#include<iostream>
//#include<array>
//int main()
//{
//	using namespace std;
//	array<int, 3> a = { 0 };
//
//	cout << "�����룺";
//	int i = 0;
//	do
//	{
//		cin >> a[i];
//		i++;
//	} while (getchar() != '\n');
//
//	int b = (a[0] + a[1] + a[2]) / i;
//	cout << i << endl;
//	cout << b << endl;
//
//	return 0;
//}

