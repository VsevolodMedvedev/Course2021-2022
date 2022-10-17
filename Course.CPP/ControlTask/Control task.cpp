#include <string>
#include <sstream>
#include <vector>
#include <iostream>
#include "human.cpp"
#include "Teacher.cpp"
#include "Student.cpp"
#include "Groupp.cpp"
#include <windows.h>
#include <iomanip> 


using namespace std;

enum menu
{
	read = 1,
	write,
	print_txt
};

//метод вывода печати в doc.txt
void printTxt(vector<string> name) 
{
	ofstream fout("AdressBook.txt", ios::app);
	for (int i = 0; i < name.size(); i++)
	{
		fout << name[i] << "\n";
	}
	fout << endl;
	fout.close();
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");

	bool continued = true;

	human* h1 = new human("Иванов", "Иван");
	human* h2 = new human("Петров", "Петр");
	human* h3 = new human("Адреев", "Андрей");

	//Создание вектора и запись "базовых" ячеек в адресную книгу
	vector<string> adressBook;
	ostringstream full_info;
	string info;
	full_info << "Фамилия" << "\t" << setw(18) << "Имя" << "\t" << setw(18) << "Отчество" << "\t" << setw(18) <<
		"Телефон" << "\t" << setw(18) << "Адрес" << "\t" << setw(18) << "Группа" << "\t" << setw(18) << "Доп.информация" << "\t" << setw(18) << "\n";
	adressBook.push_back(full_info.str());
	adressBook.push_back(h1->getData());
	adressBook.push_back(h2->getData());
	adressBook.push_back(h3->getData());

	//цикл для работы в адресной книге
	do {
		int choise;
		cout << "Выберете действие:\n" << "Для чтения адресной книги нажмите: 1\n"
			<< "Для записи в адресную книгу нажмите: 2\n"
			<< "Для печати адресной книги в текстовый файл нажмите: 3\n";
		cin >> choise;

		//меню: чтение-запись-печать в doc.txt
		switch (choise)
		{
		case read:
			{
			auto iter = adressBook.begin();
			while (iter != adressBook.end())
				{
				cout << *iter << "\n";
				++iter;
				}
			}
			break;
		case write:
		{
			char x;
			string name, last_name;
			cout << "Введите Фамилию:\n";
			cin >> last_name;
			cout << "Введите Имя:\n";
			cin >> name;
			human* h = new human(last_name, name);

			cout << "Добавить отчество? Введите y(yes) или n(no)\n";
			cin >> x;
			if (x == 'y') {
				string second_name;
				cout << "Введите отчество: \n";
				cin >> second_name;
				h->setSecondName(second_name);
			}

			cout << "Добавить номер телефона? Введите y(yes) или n(no)\n";
			cin >> x;
			if (x == 'y') {
				string phone;
				cout << "Введите номер телефона: \n";
				cin >> phone;
				h->setPhone(phone);
			}

			cout << "Добавить адрес? Введите y(yes) или n(no)\n";
			cin >> x;
			if (x == 'y') {
				string adress;
				cout << "Введите адрес: \n";
				cin >> adress;
				h->setAddress(adress);
			}

			cout << "Добавить запись в группу? Введите y(yes) или n(no)\n";
			cin >> x;
			if (x == 'y') {
				cout<< "Использовать существующую группу или создать новую? Введите e(exsist) или c(create)\n";
				cin >> x;
				if (x == 'e') {
					h->setGropName();
				}
				else if (x == 'c') {
					string group_name;
					cout << "Введите название группы: ";
					cin >> group_name;
					h->addGropName(group_name);
				}
			}

			if (h->getGropName() == "Учеба") {
				cout << "Данный человек является студентом или учителем? Введите s(student) или t(teacher)\n";
				cin >> x;
				if (x == 's') {
					vector<int> scores;
					int score;
					cout << "Введите 5 оценок студента: ";
					for (int i = 0; i < 5; i++) {
						cin >> score;
						scores.push_back(score);
					}
					student* s = new student(last_name, name, scores);
					h = s;
					cout << "Запись добавлена \n";
					adressBook.push_back(h->getData());

				}
				else if (x == 't') {
					unsigned int time;
					cout << "Введите рабочее время учителя: ";
					cin >> time;
					teacher* t = new teacher(last_name, name, time);
					h = t;
					cout << "Запись добавлена \n";
					adressBook.push_back(h->getData());

				}
			}
			else {
				cout << "Запись добавлена \n";
				adressBook.push_back(h->getData());
			}
		}
		break;
		case print_txt:
			printTxt(adressBook);
			break;
		}

		char q;
		cout << "\nХотите продолжить работу в адресной книге? Введите y(yes) или n(no)\n";
		cin >> q;
		if (q == 'n') {
			continued = false;
		}
	}
	while (continued == true);

	delete h1;
	delete h2;
	delete h3;
	
}

