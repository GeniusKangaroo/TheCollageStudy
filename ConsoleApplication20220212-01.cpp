//eg.6-7
//设有一个int型数组a，有10个元素。用三种方法输出各个元素：
//·使用数组名和下标
//·使用数组名和指针运算
//·使用指针变量

#include<iostream>

using namespace std;

int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,0 };

	////1
	//for (int i = 0; i < 10; i++)
	//{
	//	cout << *(a + i) << " ";
	//}
	//cout << endl;

	////2
	//for (int i = 0; i < 10; i++)
	//{
	//	cout << *(a + i) << " ";
	//}
	//cout << endl;

	//3
	int* c = &a[10];
	int d = a[0] + 10;
	int* h = &a[10];

	if (*h != '0')
	{
		while (*(++h) != 0);
		cout << *h << endl;
	}

	for (int* p = a; p < (a + 10); p++)
	{
		 
		cout << *p << " ";
	}
	cout << endl;
	for (int* p = a; p < &a[10]; p++)
	{
		 
		cout << *p << " ";
	}
	cout << endl;

	return 0;
}



