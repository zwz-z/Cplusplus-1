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
//	cout << "������������ܹ��� = ";
//	cout << yams[0] + yams[1] + yams[2] << endl;
//
//	cout << "�� " << yams[1] << " �����������һ����"
//		<< "�������� " << yamcosts[1] << " Ԫһ����\n";
//
//	int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
//	total = total + yams[2] * yamcosts[2];
//
//	cout << "\n����yams�Ĵ�С�� " << sizeof yams << " bytes��\n";
//	cout << "����yams�е�һ��Ԫ�صĴ�С�� " << sizeof yams[0] << " bytes��\n";
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
//	char dogs[8] = {'b', 'e','a','u','x',' ', 'I','I'};		//�����ַ���
//	char cats[8] = { 'f','a','t','e','s','s','a','\0' };	//���ַ���
//	cout << "cats = " << cats << endl;
//	cout << "dogs = " << dogs << endl;
//	return 0;
//}

//char bird[11] = "Mr.Cheeps";	//�ַ���ĩβĬ�ϴ���һ�� \0
//char fish[] = "Bubbles";
//char shirt_size = 'S'; 
//char shirt_size = "S";

//#include<iostream>
//int main()
//{
//	using namespace std;
//
//	cout << "��Ҫ����һ��Ǯ��\n";
//	cout << "��Ҫ����" "һ��Ǯ��\n";
//	cout << "��Ҫ����"
//		"һ��Ǯ��\n";
//
//	return 0;
//}

//#include<iostream>
//int main()
//{
//	using namespace std;
//	const int Size = 15;
//	char name_1[Size];					//������
//	char name_2[Size] = "C++writer";	//��ʼ������
//
//	cout << "��ã����� " << name_2;
//	cout << "�����ʲô��\n";
//	cin >> name_1;											//ͨ�������豸�����ַ���
//
//	cout << "��������֡�" << name_1 << "����������� ";
//	cout << strlen(name_1) << " ���֣����ұ��洢\n";		//���ַ�������
//	cout << "��һ���� " << sizeof(name_1) << " �ֽڵ������ڡ�\n";
//	cout << "������ֿ�ͷ�� " << name_1[0] << " ��\n";
//
//	name_2[3] = '\0';					//���ÿ��ַ�
//	cout << "���������ֵ�ǰ3���ַ���";
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
//	cout << "������������֣�\n";
//	cin >> name;
//	cout << "��������ϲ������㣺\n";
//	cin >> dessert;
//
//	cout << "����һЩ " << dessert << " Ҫ���㣬" << name << ".\n";
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
//	cout << "������������֣�\n";
//	cin.getline(name, 20);				//ʹ��getline( )����
//	cout << "��������ϲ������㣺\n";
//	cin.getline(dessert, 20);			//ʹ��getline( )����
//
//	cout << "����һЩ " << dessert << " Ҫ���㣬" << name << ".\n";
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
//	cin.get(str_1, 15);		//ִ��*1
//	cin.get();
//	cin.get(str_2, 15);		//ִ��*2
//	//cin.get(str_1, 10).get();	//ƴ���������Ա����
//	//cin.get(str_2, 10).get();	//ƴ���������Ա����
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
//	cout << "�������ķ����Ѿ��м����ˣ�\n";
//	int year = 0;
//	(cin >> year).get();
//	cout << "���׷��ӵĵ�ַ��ʲô��\n";
//	char address[80];
//	cin.getline(address, 80);
//
//	cout << "�ѽ��ɶ�ã�" << year << endl;
//	cout << "��ַ��" << address << endl;
//	cout << "��ϡ�\n";
//
//	return 0;
//}

//#include<iostream>
//#include<string>
//int main()
//{
//	using namespace std;
//	char arr_1[20];
//	char arr_2[20] = "jaguar";		//��ʼ�����飬jaguar�����ޱ�
//	string str1;
//	string str2 = "panther";		//��ʼ��string�࣬panther���ڱ�
//
//	cout << "������һ��è�ƶ��";
//	cin >> arr_1;
//	cout << "��������һ��è�ƶ��";
//	cin >> str1;
//
//	cout << "\n����������һЩè�ƶ��\n";
//	cout << arr_1 << " " << arr_2 << " "
//		<< str1 << " " << str2 << endl << endl;
//
//	cout << arr_2 << " ���ֵĵ�������ĸ�� " << arr_2[2] << endl;
//	cout << str2 << " ���ֵĵ�������ĸ�� " << str2[2] << endl;
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
//	char firat_ch[] = { "������ 111 222" };
//	char seconf_ch[] { "Elegant ����" };
//	string str_1;
//	string str_2 = { "flying to the moon" };
//	str_1 = str_2;
//	
//	string str_3;
//	str_3 = str_1 + str_2;
//	str_1 += str_2;			//��str_2�ӵ�str_1��ĩβ
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
//	char firat_ch[] = { "������ 111 222" };
//	char seconf_ch[] { "Elegant ����" };
//	string str_1;
//	string str_2 = { "flying to the moon" };
//	str_1 = str_2;
//	
//	string str_3;
//	str_3 = str_1 + str_2;
//	str_1 += str_2;			//��str_2�ӵ�str_1��ĩβ
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
//	cout << "ִ�в�����s_2 = s_1\n";
//	s_2 = s_1;
//	cout << "s_1��" << s_1 << "  s_2��" << s_2 << endl << endl;
//
//	cout << "ִ�в�����s_2 = \"buzzard\"\n";
//	s_2 = "buzzard";
//	cout << "s_2��" << s_2 << endl << endl;
//
//	cout << "ִ�в�����s_3 = s_1 + s_2\n";
//	s_3 = s_1 + s_2;
//	cout << "s_3��" << s_3 << endl << endl;
//
//	cout << "ִ�в�����s_1 += s_2\n";
//	s_1 += s_2;
//	cout << "s_1��" << s_1 << endl << endl;
//
//	cout << "ִ�в�����s_2 += \" for a day\"\n";
//	s_2 += " for a day";
//	cout << "s_2��" << s_2 << endl;
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
//	//strcpy��ʹ����------
//	char arr_1[20] = "���";
//	char arr_2[20] = "Hello World";
//	strcpy(arr_1, arr_2);
//	cout << "arr_1��" << arr_1 
//		<< "\t���� = " << strlen(arr_1) << endl;
//
//	string str_1 = "Warning!";
//
//	int len_1 = str_1.size();
//	int len_2 = strlen(arr_1);
//
//	////strcat��ʹ����------
//	//char arr_3[10] = "�ټ���";
//	//char arr_4[20] = "GoodBye!";
//	//strcat(arr_3, arr_4);
//	//cout << "arr_3��" << arr_3 
//	//	<< "\t���� = " << strlen(arr_3) << endl;
//
//	return 0;
//}

//#include<iostream>
//#include<string>
//#include<cstring>
//int main()
//{
//	using namespace std;
//	char chArr[20];	//δ���г�ʼ����������������δ�����
//	string str;		//Ϊ��ʼ����string���󳤶�Ĭ���� 0
//
//	cout << "����ǰ��chArr ���ַ����ĳ��� = " 
//		<< strlen(chArr) << endl;	//�˴����������ÿ�ζ�����ͬ
//	cout << "����ǰ��str ���ַ����ĳ��� = " 
//		<< str.size() << endl;	
//
//	cout << "\n������һ���ı���\n";
//	cin.getline(chArr, 20);
//	cout << "�������ˣ�" << chArr << endl;
//	cout << "��������һ���ı���\n";
//	getline(cin, str);				//���أ��˴�û�г����趨
//	cout << "�������ˣ�" << str << endl;
//
//	cout << "\n�����chArr ���ַ����ĳ��� = " 
//		<< strlen(chArr) << endl;
//	cout << "�����str ���ַ����ĳ��� = " 
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
//	//cout << R"(\n ���������з��������� endl ��)" << '\n';
//	cout << R"+*("(����˭��)"������ô�ʡ�)+*" << endl;
//
//	return 0;
//}