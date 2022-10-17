#pragma once
#include <string>
#include <fstream>
#include <sstream>
#include "Groupp.cpp"
#include <iostream>
#include <iomanip> 

using namespace std;

class human
{
private:
	string name;
	string lastName;
	string secondName = "---";;
	string phone = "---";
	string address = "---";
	string groupName = "---";
	

public:

	human(string lastName, string name) {
		this->name = name;
		this->lastName = lastName;
	}

	string getLastName() const
	{
		return lastName;
	}
	string getName() const
	{
		return name;
	}
	string getSecondName() const
	{
		return secondName;
	}
	void setSecondName(string secName)
	{
		this->secondName = secName;
	}

	void setPhone(string phone)
	{
		this->phone = phone;
	}
	string getPhone() const
	{
		return phone;
	}
	void setAddress(string address)
	{
		this->address = address;
	}
	string getAddress() const
	{
		return address;
	}
	void setGropName()
	{
		try {
			int num;
			group* g = new group();
			vector<string> vect = g->getVectGroupName();

			cout << "\nДля выбора группы ";
			auto iter = vect.begin();
			int i = 0;
			while (iter != vect.end())
			{
				cout << "'" << *iter <<"'" << " нажмите " << i << "\n";
				i++;
				++iter;
			}

			cin >> num;
			this->groupName = g->getGroupName(num);
		}
		catch (const std::exception& err)
		{
			this->groupName = "Неопределенная группа";
		}
	}

	void addGropName(string group_name)
	{
		try {
			int num;
			group* g = new group();
			g->addGroup(group_name);
			vector<string> vect = g->getVectGroupName();
		
			cout << "\nДля выбора группы ";
			auto iter = vect.begin();
			int i = 0;
			while (iter != vect.end())
			{
				cout << "'" << *iter << "'" << " нажмите " << i << "\n";
				i++;
				++iter;
			}
			cin >> num;
			this->groupName = g->getGroupName(num);
		}
		catch (const std::exception& err)
		{
			this->groupName = "Неопределенная группа";
		}
	}

	string getGropName() const
	{
		return groupName;
	}

	virtual string getData() const
	{
		cout << setiosflags(ios::left);
		std::ostringstream full_info;
		full_info << getLastName() <<"\t"<< setw(18) << getName() << "\t" << setw(18) << getSecondName() << "\t" << setw(18)
			<< getPhone() << "\t" << setw(18) << getAddress() << "\t" << setw(18) << getGropName() << "\t" << setw(18);
		return full_info.str();
	}

};


