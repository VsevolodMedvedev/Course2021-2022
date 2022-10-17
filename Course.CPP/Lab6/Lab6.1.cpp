#include <iostream>
#include <string>
#include <fstream>

using namespace std;
string enterPoem(string &text, string &separator);

int main()
{
	string text;
	string sep;
	cout << "Please enter your sepatator (one simbol) for transfer a line\n"; //Ввод символа, переводящего текст на новую строку
	getline(cin, sep);
	cout << "Please enter your poem. To transfer a line, use the '" + sep + "'\n"; //Ввод текста с учетом разделительного символа
	getline(cin, text);
	enterPoem(text, sep);

// Запись текста в поток
	ofstream out("test.txt", ios::out | ios::binary);
	if (!out) {
		cout << "Can't open\n";
		return 1;
	}
	out << text + "\n";
	out.close();

// Чтение текста из потока
	string s;
	ifstream file("test.txt");
	while (getline(file, s)) {
		cout << s << endl;
	}
	file.close();
}

string enterPoem(string &text, string &separator) {
	int pos = 0;
	while (pos < text.length()) {
		if (text.find(separator) != -1) {
			text.replace(text.find(separator), 1, "\n");
			pos++;
		}
		else {
			break;
		}
	}
	return text;
}
