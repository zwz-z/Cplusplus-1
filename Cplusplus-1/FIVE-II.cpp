
//#include<iostream>
//const int ArSize = 20;
//int main()
//{
//	using namespace std;
//	char name[ArSize];
//	cout << "������һ�����ʣ�Ӣ�ģ���";
//	cin >> name;
//
//	cout << "�������ӵ�е��ַ�����ASCII���ǣ�\n";
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
	cout << "��������Ҫ�ӳٵ�ʱ�䣨��λ���룩��";
	float secs;
	cin >> secs;
	clock_t delay = secs * CLOCKS_PER_SEC;

	cout << "��ʼ��ʱ\a\n";
	clock_t start = clock();
	while (clock() - start < delay);

	cout << "���\a\n";

	return 0;
}
