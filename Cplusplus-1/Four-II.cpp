
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
//		"��������",
//		"xxxsss",
//		1234567
//	};
//	student std_2;
//
//	cout << "std_1��" << "std_1.name = " << std_1.name
//		<< "  std_1.address = " << std_1.address
//		<< "  std_1.ID = " << std_1.ID << endl;
//
//	cout << "std_2 = std_1\n";
//	std_2 = std_1;				//��ֵ
//
//	cout << "std_2��" << "std_2.name = " << std_2.name
//		<< "  std_2.address = " << std_2.address
//		<< "  std_2.ID = " << std_2.ID << endl;
//
//	return 0;
//}

//int main()
//{
//	//student xiaoMing;
//	//xiaoMing.name;		//����name��Ա
//	//xiaoMing.address;	//����address��Ա
//	//xiaoMing.ID;		//����ID��Ա
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
//		"�㽶",		//name��Ա
//		1.2,			//weight��Ա
//		12.55			//price��Ա
//	};
//	shopping list_2 =
//	{
//		"ƻ��",
//		0.8,
//		10.81
//	};
//
//	cout << "����Ҫ������Щ " << list_1.name << " �� " << list_2.name << " ��\n";
//	cout << "��֧�� " << list_1.price + list_2.price << " Ԫ��\n";
//
//	return 0;
//}

//struct student
//{
//	char name[10];
//	unsigned char address[10];
//	int ID;
//};
////�ⲿ����
//struct student xiaoMing;    //C���ԵĽṹ��������ʽ
//student xiaoHong;           //C++�Ľṹ������ʽ
//
//student xiaoLan =           //����������������ͬʱ���г�ʼ��
//{
//	"XiaoLan",        //name����
//	"xxxxxx",         //address����
//	1213,             //ID����
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
////�ڲ�����
//int main()
//{
//	student liMing;              //�ڽṹ����������������Ҳ�ǿ��е�
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
//		{"С��", 4000},		//��ʼ����һ��Ԫ��
//		{"����", 5000}		//��ʼ���ڶ���Ԫ��
//	};
//
//	cout << "��һλ��ʦ�� " << group[0].name << " ���ڶ�λ��ʦ�� " << group[1].name
//		<< "\n���ǵĹ���һ���� "
//		<< group[0].bonus + group[1].bonus << " Ԫ��\n";
//
//	return 0;
//}

//#include<iostream>
//struct S
//{
//	char c;	//1���ֽ�
//	int i;		//4���ֽ�
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
//	unsigned int a_1 : 4;	//Ϊ a_1 ���� 4���ֽ� �Ŀռ�
//	unsigned int : 4;		//����ʹ�õ�4���ֽڵĿռ�
//	bool c_1 : 1;
//	bool d_1 : 1;
//};
//
//S_1 s_1 = { 12, true, false };

//#include<iostream>
////�������͵�����
//union Un
//{
//	char c;		//1���ֽ�
//	int i;		//4���ֽ�
//};
//
//int main()
//{
//	using namespace std;
//	//���ϱ����Ķ���
//	union Un un_1;
//	//������������Ĵ�С
//	//cout << "un_1��ռ�ռ�Ĵ�С�ǣ�" << sizeof un_1 << endl;
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
//	union		//�˴�û�������������
//	{
//		long id_num;
//		char id_ch[20];
//	};			//����������
//};
//
//int main()
//{
//	using namespace std;
//	widget prize;
//	//ʡ���м����
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
//	cout << "��ѡ��Ҫ�������Ʒ��Ϣ��";
//	cin >> prize.type;
//
//	cout << "�������Ӧ��Ʒ����Ϣ��";
//	if (prize.type == 1)
//		cin >> prize.id_val.id_num;
//	else
//		cin >> prize.id_val.id_ch;
//
//	cout << "������ϡ�\n";
//
//	return 0;
//}
//

//enum color
//{
//	red,		//��Ӧֵ��0
//	orange,		//��Ӧֵ��1
//	yellow,		//��Ӧֵ��2
//	green,		//��Ӧֵ��3
//	blue,		//��Ӧֵ��4
//	violet,		//��Ӧֵ��5
//	indigo,		//��Ӧֵ��6
//	untraviolet	//��Ӧֵ��7
//};
//
//int main()
//{
//	color band;
//
//	//��ִ��
//	int col = blue;	//ö����blue����ת����int����
//	col = 3 + red;
//	band = color(2323);	//�ý��δ������
//
//	////����ִ��
//	band = 3;			//int�����޷�ת����ö����
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
//	myFlag = bits(2000);		//��ֵ�Ϸ���6 λ�ڸ�ö�ٵķ�Χ��
//
//	return 0;
//}