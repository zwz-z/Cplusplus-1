#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//int main()
//{
//	using namespace std;
//	int a_1 = 6;
//	double b_1 = 4.5;
//
//	cout << "����a_1��ֵ = " << a_1;
//	cout << "\t\t��Ӧ�ĵ�ַ = " << &a_1 << endl;
//
//	cout << "����b_1��ֵ = " << b_1;
//	cout << "\t��Ӧ�ĵ�ַ = " << &b_1 << endl;
//
//	return 0;
//}

//#include<iostream>
//int main()
//{
//	using namespace std;
//
//	int into = 12;	//��ֵ12�洢�ڱ���into��
//	int* mainly;
//	mainly = &into;	//������into�ĵ�ַ�洢�ڱ���mainly��
//
//	cout << "�ٱ�ʾinto�ĵ�ַ��";
//	cout << "\n&into      = " << mainly;
//	cout << "\nmainly     = " << mainly;
//
//	cout << "\n\n�ڱ�ʾinto�ڲ��洢��ֵ��";
//	cout << "\ninto       =" << into;
//	cout << "\n*mainly    =" << *mainly;	//ʹ�� *����� �ҵ�ָ��ָ���ַ�ڴ洢��ֵ 
//
//	cout << "\n\n���� *mainly = *mainly + 1��";
//	*mainly = *mainly + 1;
//	cout << "\n��ʱinto   = " << into << endl;
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
//	cout << "a_1��ֵ   = " << a_1 << endl;
//	cout << "a_1�ĵ�ַ = " << &a_1 << endl << endl;
//
//	cout << "*a_p��ֵ = " << *a_p << endl;
//	cout << "a_p��ֵ  = " << a_p << endl;
//
//	return 0;
//}

//int* fellow;
//*fellow = 232323;	//fellowָ����δ֪�ġ���δ���ٵĵ�ַ

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
//	int* pt = new int;			//�ڶ�������һ��int���ʹ�С�Ŀռ�
//	*pt = 1001;
//
//	cout << "nights��ֵ = " << nights
//		<< "\t��ַ = " << &nights << endl;
//	cout << "*pt��ֵ    = " << *pt
//		<< "\t��ַ = " << pt << endl;
//
//	double* pd = new double;	//�ڶ�������һ��double���ʹ�С�Ŀռ�
//	*pd = 10000001.0;			//�洢һ��double���͵�ֵ
//
//	cout << "\n*pd��ֵ    = " << *pd << endl;
//	cout << "ָ��pdָ��ĵ�ַ = " << pd << endl;
//	cout << "�洢ָ��pd�ĵ�ַ = " << &pd << endl;
//
//	cout << "\npt�Ĵ�С = " << sizeof(pt)
//		<< "\t*pt�Ĵ�С = " << sizeof(*pt) << endl;
//	cout << "pd�Ĵ�С = " << sizeof(pd)
//		<< "\t*pd�Ĵ�С = " << sizeof(*pd) << endl;
//
//	delete pd;		//�ǵ��ͷ�ͨ��new���ٵĿռ�
//	return 0;
//}

//#include<iostream>
//int main()
//{
//	using namespace std;
//	//int a = 0;
//	//int* pa = &a;
//	//delete pa;		//��������paָ����ڴ�ռ䲻��ͨ��new�ڶ��Ͽ��ٵ�
//
//	int* ps = new int;
//	int* pq = ps;		//pq �� ps ָ�����ͬһ��ռ�
//	delete pq;			//ͨ���ڶ���ָ��pq����ɾ��
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
//	double* p3 = new double[3];		//����һ�����Դ洢3��double���͵Ķ�̬����
//	p3[0] = 0.2;
//	p3[1] = 0.5;
//	p3[2] = 0.8;
//
//	cout << "p3[1] ��ֵ = " << p3[1] << endl;
//
//	cout << endl << "�� p3 = p3 + 1 ��" << endl;
//	p3 = p3 + 1;					//ָ��ָ���������һ��Ԫ��
//	cout << "    p3[0] ��ֵ = " << p3[0] << endl
//		<< "    p3[1] ��ֵ = " << p3[1] << endl;
//
//	p3 = p3 - 1;					//ָ������ָ��������Ԫ��
//	delete[] p3;					//�ͷ��ڴ�
//	return 0;
//}

//#include<iostream>
//int main()
//{
//	using namespace std;
//	short stacks[3] = { 3, 2, 1 };
//	double wages[3] = { 10000.0, 20000.0, 30000.0 };
//
//	//���ֻ�������ַ�ķ�ʽ
//	double* pw = wages;			//����������������Ԫ�صĵ�ַ
//	short* ps = &stacks[0];		//ʹ�õ�ַ�������&��
//
//	//ʹ������Ԫ��
//	cout << "pw = " << pw << "��*pw = " << *pw << endl;
//	pw = pw + 1;
//	cout << "�� pw + 1��\n";
//	cout << "pw = " << pw << "��*pw = " << *pw << "\n\n";
//
//	cout << "ps = " << ps << "��*ps = " << *ps << endl;
//	ps = ps + 1;
//	cout << "�� ps + 1��\n";
//	cout << "ps = " << ps << "��*ps = " << *ps << "\n\n";
//
//	cout << "ͨ���±����Ԫ��\n";
//	cout << "stacks[0] = " << stacks[0]
//		<< "��stacks[1] = " << stacks[1] << endl;
//	cout << "ͨ��ָ�����Ԫ��\n";
//	cout << "*stacks = " << *stacks
//		<< "  ��*(stacks + 1) = " << *(stacks + 1) << endl;
//
//	cout << "\n����wages�Ĵ�С = " << sizeof(wages);
//	cout << "\nָ��pw�Ĵ�С    = " << sizeof(pw) << endl;
//
//	return 0;
//}

//#include<iostream>
//int main()
//{
//	using namespace std;
//	short tell[10];
//	cout << tell << endl;		//����ӡ������Ԫ�صĵ�ַ
//	cout << &tell << endl;		//����ӡ��������ĵ�ַ
//
//	short(*pas)[10] = &tell;
//
//	return 0;
//}

//#include<iostream>
//int main()
//{
//	using namespace std;
//	char flower[10] = "õ��";
//	cout << flower << " �Ǻ�ɫ�ġ�\n";
//
//	return 0;
//}

//#include<iostream>
//#include<cstring>			//�����˺���strlen( )��strcpy( )
//int main()
//{
//	using namespace std;
//	char animal[20] = "bear";
//	const char* bird = "wren";
//	char* ps;				//��ʱ��ps�ڲ��洢��Ϣ�в����ˣ������ӡ�����ܳ�������
//
//	cout << animal << " �� " << bird << "\n";	//��� ָ���� ���� �ڴ洢���ַ���
//
//	cout << "\n������һ�ֶ����Ӣ�ģ���";
//	cin >> animal;			//����������ַ������Ȳ�����20���ֽ�
//							//��ʱ��� cin >> ps; �ǲ������ģ���Ϊpsָ��Ŀռ��Բ�ȷ��
//
//	ps = animal;
//	cout <<"�������ˣ�" << ps << "��\n";	//��ʹ������animal��Ч����һ����
//	cout << "\n��ʹ�ú���strcpy( )֮ǰ��\n";
//	cout << animal << " ��animal�����ڴ��ַ�� " << (int*)animal << endl;
//	cout << ps << "     ��ps�����ڴ��ַ�� " << (int*)ps << endl;
//
//	ps = new char[strlen(animal) + 1];			//�ڶ���Ϊָ��ps������һ��ռ�
//
//	strcpy(ps, animal);		//��psָ����ַ������Ƶ�����animal����
//	cout << "\n��ʹ�ú���strcpy( )֮��\n";
//	cout << animal << " ��animal�����ڴ��ַ�� " << (int*)animal << endl;
//	cout << ps << "     ��ps�����ڴ��ַ�� " << (int*)ps << endl;
//
//	delete[]ps;				//�黹�Ӷ��Ͽ��ٵĵ�ַ
//	return 0;
//}

//#include<iostream>
//#include<cstring>
//int main()
//{
//	using namespace std;
//	char food[10] = { 0 };			//��ʼ��Ϊ��
//	strcpy(food, "Hello world!!");	//"Hello world!!"��13���ַ���13 > 10
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
//	things* pth = &th_1;			//ָ��ṹth_1��ָ��
//
//	cout << "ͨ����Ա����� (.) ���ʽṹ�ĳ�Ա";
//	cout << "\nth_1.good = " << th_1.good;
//	cout << "\nth_1.bad  = " << th_1.bad;
//
//	cout << "\n\nͨ����ͷ��Ա����� (->) ���ʽṹ�ĳ�Ա";
//	cout << "\npth->good = " << pth->good;
//	cout << "\npth->bad  = " << pth->bad << "\n";
//
//	return 0;
//}

//#include<iostream>
//#include<cstring>		//��ʵ��string.h Ҳ����
//using namespace std;
//char* getname();
//
//int main()
//{
//	char* name;
//
//	name = getname();	//���ú���getname����ַ����ĵ�ַ
//	cout << name << " �ĵ�ַ�� " << (int*)name << "\n\n";
//	delete[] name;		//�ͷ��ڴ�
//
//	name = getname();	//���ú���getname����ַ����ĵ�ַ
//	cout << name << " �ĵ�ַ�� " << (int*)name << "\n\n";
//	delete[] name;		//�ٴ��ͷ��ڴ�
//
//	return 0;
//}
//
//char* getname()			//����һ��char���͵�ָ��
//{
//	char temp[80];		//��ʱ�Դ洢
//
//	cout << "���������µ����֣�";
//	cin >> temp;
//	char* pn = new char[strlen(temp) + 1];
//	strcpy(pn, temp);	//���ַ���������һ���С���ڴ�ռ���
//
//	return pn;			//����������ʱ������temp���������ڽ�������ռ�õĿռ䷵��ϵͳ
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
//	vector<int> vi;			//����һ��int���͵����飬����Ϊ0
//
//	int n = 0;
//	cin >> n;
//	vector<double>vd(n);	//����һ��double���͵����飬����Ϊn
//
//	return 0;
//}

//#include<iostream>
//#include<array>
//
//int main()
//{
//	using namespace std;
//	array<int, 5> ai;		//����һ��array�࣬������int��������5
//	array<double, 4> ad = { 1.2, 3.1, 3.1416, 4.3 };	
//
//	return 0;
//}