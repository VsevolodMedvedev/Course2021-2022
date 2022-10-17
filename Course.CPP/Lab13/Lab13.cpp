#include <string>
#include <sstream>
#include <vector>
#include <iostream>

using namespace std;

class human {
public:
	
	human() {};
	human(string last_name, string name, string second_name)
	{
		this->last_name = last_name;
		this->name = name;
		this->second_name = second_name;
	}
	
	virtual string getdata() const
	{
		ostringstream full_name;
		full_name << this->last_name << " "<< this->name << " "<< this->second_name;
		return full_name.str();
	}
private:
	string name; 
	string last_name; 
	string second_name; 
};

class student : public human {
public:
	student(string last_name, string name, string second_name, vector<int> scores) :
		human(last_name, name, second_name) {
		this->scores = scores;
	}
	string getdata() const
	{
		ostringstream full_name;
		full_name << human::getdata() << "\nСредний балл: " << get_average_score();
		return full_name.str();
	}
	
	float get_average_score() const
	{
		unsigned int count_scores = this->scores.size();
		unsigned int sum_scores = 0;
		float average_score;
		for (unsigned int i = 0; i < count_scores; ++i) {
			sum_scores += this->scores[i];
		}
		average_score = (float)sum_scores / (float)count_scores;
		return average_score;
	}
private:
	vector<int> scores;
};

class teacher : public human {
public:
	teacher(
		string last_name, string name, string second_name,
		unsigned int work_time) : human(last_name, name, second_name) {
		this->work_time = work_time;
	}

	string getdata() const
	{
		ostringstream full_name;
		full_name << human::getdata() << "\nКоличество часов: " << get_work_time();
		return full_name.str();
	}
	unsigned int get_work_time() const
	{
		return this->work_time;
	}
private:
	unsigned int work_time;
};
int main(){
std::vector<int> scores;
scores.push_back(5);
scores.push_back(3);
scores.push_back(4);
scores.push_back(4);
scores.push_back(5);
scores.push_back(3);
scores.push_back(3);
scores.push_back(3);
scores.push_back(3);

human* h = new human("Петров", "Иван", "Алексеевич");

student *s = new student("Петров", "Иван", "Алексеевич", scores);
h=s;
cout << h->getdata() <<endl;

unsigned int teacher_work_time = 40;
teacher *t = new teacher("Сергеев", "Дмитрий", "Сергеевич",
teacher_work_time);
h=t;
cout << h->getdata() << endl;
delete h;
delete s;
delete t;

return 0;

}