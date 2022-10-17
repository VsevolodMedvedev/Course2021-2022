#include <iostream>
#include <string>
#include <fstream>

using namespace std;


int main()
{
	
	const int N = 10;
	int a[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };
	int min = 0; 
	int buf = 0; 
	
	ofstream out("test.txt", ios::out | ios::binary);
	if (!out) {
		cout << "Can't open\n";
		return 1;
	}
	for (int i : a)
		out << i << "\t";
	out << "\n";

	for (int i = 0; i < N; i++)
	{
		min = i;
		for (int j = i + 1; j < N; j++)
			min = (a[j] < a[min]) ? j : min;
		if (i != min)
		{
			buf = a[i];
			a[i] = a[min];
			a[min] = buf;
		}
	}
	for (int i : a)
		out << i << "\t";
	out.close();

	string s;
	ifstream file("test.txt");
	while (getline(file, s)) {
		cout << s << endl;
	}
	file.close();
}

