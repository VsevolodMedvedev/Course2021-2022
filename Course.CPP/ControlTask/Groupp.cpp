#pragma once
#include <string>
#include <sstream>
#include <vector>
#include <exception>

using namespace std;

class group
{
private:
	vector<string> groupName = {
		"Семья",
		"Друзья",
		"Работа",
		"Учеба"	
	};
public:
	vector<string> getVectGroupName() const
	{
		return groupName;
	}

	string getGroupName(int num) {
		if (num > groupName.size()|| num < 0) {
			throw std::exception();
		}
		return groupName[num];
	}

	void addGroup(string name) {
		groupName.push_back(name);
	}
};