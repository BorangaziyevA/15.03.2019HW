#include<iostream>
#include<iomanip>
#include<Windows.h>
#include<fstream>

using namespace std;

struct Ozu
{
	char Firm[30];

	int Chastota;

	int Obem;

	void print()
	{
		cout << Firm << " " << Chastota << " " << Obem << " " << endl;
	}
};

struct Odezhda
{
	char color[30];

	int Size;

	int Dlina;

	void print()
	{
		cout << color << " " << Size << " " << Dlina << endl;
	}
};

int main()
{
	ifstream in_file("Odezhda.txt");
	int n;
	int size;
	int dlina;
	if (!in_file)
	{
		cout << "File open error" << endl;
	}
	else
	{
		in_file >> n;
		Odezhda *dd;
		dd = new Odezhda[n];

		for (size_t i = 0; i < n; i++)
		{
			in_file >> dd[i].color >> dd[i].Size >> dd[i].Dlina;
		}

		for (size_t i = 0; i < n; i++)
		{
			dd[i].print();
		}

		cout << "Size:" << endl;
		cin >> size;
		for (size_t i = 0; i < n; i++)
		{
			if (size <= dd[i].Size)
			{
				dd[i].print();
			}

		}

		cout << "Dlina:" << endl;
		cin >> dlina;
		for (size_t i = 0; i < n; i++)
		{
			if (size <= dd[i].Dlina)
			{
				dd[i].print();
			}

		}
	}

	system("pause");
	return 0;
}



//////////OZU////////
//int main()
//{
//	ifstream in_file("Ozu.txt");
//	int n;
//	if (!in_file)
//	{
//		cout << "File open error" << endl;
//	}
//	else
//	{
//		in_file >> n;
//		Ozu *oo;
//		oo = new Ozu[n];
//		int Ggs, Mb;
//
//		for (size_t i = 0; i < n; i++)
//		{
//			in_file >> oo[i].Firm >> oo[i].Chastota >> oo[i].Obem;
//		}
//
//		for (size_t i = 0; i < n; i++)
//		{
//			oo[i].print();
//		}
//
//		cout << "Chastota:" << endl;
//		cin >> Ggs;
//		for (size_t i = 0; i < n; i++)
//		{
//			if (Ggs<oo[i].Chastota)
//			{
//				oo[i].print();
//			}
//
//		}
//		cout << "Memory:" << endl;
//		cin >> Mb;
//		for (size_t i = 0; i < n; i++)
//		{
//			if (Mb<oo[i].Obem)
//			{
//				oo[i].print();
//			}
//
//		}
//	}
//
//	system("pause");
//	return 0;
//}