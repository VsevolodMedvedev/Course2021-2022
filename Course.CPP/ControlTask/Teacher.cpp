#include <string>
#include <fstream>
#include <sstream>
#include "human.cpp"
#include <vector>

using namespace std;

class teacher : public human {
public:
	teacher(
		string last_name, string name, int work_time) : human(last_name, name) {
		this->lesson = work_time;
	}

	string getData() const
	{
		ostringstream full_name;
		cout << setiosflags(ios::left);
		full_name << human::getData() << setw(18) << "Доп.часы: " << get_work_time();
		return full_name.str();
	}
	string get_work_time() const
	{
		return this->lesson;
	}
private:
	string lesson;
};
