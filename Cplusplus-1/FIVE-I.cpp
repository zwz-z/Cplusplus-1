
//#include<iostream>
//int main()
//{
//	using namespace std;
//	int i;
//	for (i = 0; i < 5; i++)
//		cout << "�� " << i + 1 << " ��ѭ����\n";
//	cout << "ѭ��������\n";
//	return 0;
//}

//#include<iostream>
//int main()
//{
//	using namespace std;
//
//	cout << "�����뵹����ʼ�����֣�";
//	int limit;
//	cin >> limit;
//
//	int i = 0;
//	for (i = limit; i; i--)
//	{
//		cout << "i = " << i << "\n";
//	}
//	cout << "����i��ֵΪ " << i << "\n";
//
//	return 0;
//}

//#include<iostream>
//int main()
//{
//	using namespace std;
//	int x = 0;
//
//	cout << "���ʽ x = 100 ��ֵ�� ";
//	cout << (x = 100) << endl;
//	cout << "��ʱ x = " << x << endl << endl;
//
//	cout << "���ʽ x < 3 ��ֵ�� ";
//	cout << (x < 3) << endl;
//	cout << "���ʽ x > 3 ��ֵ�� ";
//	cout << (x > 3) << endl << endl;
//
//	cout.setf(ios_base::boolalpha);		//ʹ�ñ�ǣ�����cout���true��false
//
//	cout << "���ʽ x < 3 ��ֵ�� ";
//	cout << (x < 3) << endl;
//	cout << "���ʽ x > 3 ��ֵ�� ";
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
//const int ArSize = 16;					//ȫ�ֱ���������
//int main()
//{
//	long long f[ArSize];
//	f[1] = f[0] = 1LL;					//long long���͵� 1
//
//	for (int i = 2; i < ArSize; i++)	//����
//		f[i] = i * f[i - 1];
//
//	for (int i = 0; i < ArSize; i++)	//��ӡ
//		std::cout << i << "! = " << f[i] << std::endl;
//
//	return 0;
//}

//#include<iostream>
//int main()
//{
//	using std::cout;	//һ��using����
//	using std::cin;
//	using std::endl;
//
//	cout << "������ѭ���Ĳ�����";
//	int by;
//	cin >> by;
//
//	cout << "�� " << by << " Ϊ��������ѭ����\n";
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
//	cout << "������һ��(Ӣ��)���ʣ�";
//	string word;
//	cin >> word;
//
//	cout << "���������ӡ�ַ�����";
//	for (int i = word.size() - 1; i >= 0; i--)
//		cout << word[i];
//	cout << "\n��ӡ������\n";
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
//	cout << "a   = " << a << "��  b = " << b << "\n";
//	cout << "a++ = " << a++ << "��++b = " << ++b << "\n";
//	cout << "a   = " << a << "��  b = " << b << "\n";
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
//	int* pt = arr;		//��ʱָ��ptָ������arr����Ԫ�صĵ�ַ����ָ��arr[0]�������õõ� 32
//	++pt;				//��ʱָ��ptָ��arr[1]�������õõ� 241 
//
//	return 0;
//}

//int main()
//{
//	//����
//	int k = 5;
//	k += 3;					//k��ֵ��Ϊ 8
//
//	//����
//	int* pa = new int[10];	//paָ�� pa[0] ����λ��
//	pa[4] = 12;
//	pa[4] += 6;				//pa[4]��ֵ��Ϊ 18
//
//	//������
//	*(pa + 4) += 7;			//pa[4]��ֵ��Ϊ 25
//
//	//ָ��
//	pa += 2;				//ָ��paָ�� pa[2] ����λ��
//
//	return 0;
//}

//#include<iostream>
//int main()
//{
//	using namespace std;
//
//	cout << "������5�����֣�\n";
//	double number;
//	double sum = 0.0;
//	for (int i = 1; i <= 5; i++)
//	{
//		cout << "��" << i << "�����֣�";
//		cin >> number;
//		sum += number;
//	}
//
//	cout << endl << "5������֮�� = " << sum << endl;
//	cout << "5�����ֵ�ƽ��ֵ = " << sum / 5 << endl;
//
//	return 0;
//}

//#include<iostream>
//int main()
//{
//	using namespace std;
//	int x = 20;
//	
//	{					//������һ������
//		int y = 100;
//		cout << x << endl;
//		cout << y << endl;
//	}					//y���������ڽ���
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
//		int x = 10;			//������ı���
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
//	cout << "������һ������(Ӣ��)��";
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
//	cout << word << "\n����ִ����ϡ�\n";
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
//	for (x = 20; x > 5; x--);			//ѭ����ֱ�� x С�ڵ��� 5
//	for (x = 1; y != x; ++x);			//ѭ����ֱ�� y ���� x
//	for (cin >> x; x == 0; cin >> x);	//ѭ����ֱ�� x ���ܵ�ֵΪ 0
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
//	cout << "��ȷ�Ĳ�����ʹ�ã�\n";
//	for (i = 0; scores[i] == 20; i++)
//		cout << "scores " << i << "��20\n";
//
//	cout << "\n����Ĳ�����ʹ�ã�\n";
//	for (i = 0; scores[i] = 20; i++)
//		cout << "scores " << i << "��20\n";
//
//	return 0;
//}

//#include<iostream>
//#include<cstring>			//��������strcmp()
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
//	cout << "ѭ��������word = " << word << endl;
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
//	cout << "ѭ��������word = " << word << endl;
//
//	return 0;
//}