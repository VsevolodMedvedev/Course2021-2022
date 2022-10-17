#include <string>
#include <fstream>
#include <sstream>
#include "human.cpp"
#include <vector>

using namespace std;

class student : public human {
public:
	student(string last_name, string name, vector<int> scores) :
		human(last_name, name) {
		this->scores = scores;
	}
	string getData() const
	{
		ostringstream full_name;
		cout << setiosflags(ios::left);
		full_name << human::getData() <<  setw(18) << "Средний балл: " << get_average_score();
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
