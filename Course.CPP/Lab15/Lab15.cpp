#include <iostream>
#include <map>
#include <string>
#include <windows.h>
using namespace std;

struct StudentGrade
{
    string name;
    char value;
};

int main()
{
    system("chcp 1251");
    system("cls");

    map<string, char> StudentGradeMap;
    map<string, char>::iterator iter;

    StudentGrade stud1{ "Tom", '5' };
    StudentGrade stud2{ "Bill", '3' };
    StudentGrade stud3{ "Alex", '4' };
    StudentGrade stud4{ "Fil", '5' };

    StudentGradeMap.insert(pair<string, char>(stud1.name, stud1.value));
    StudentGradeMap.insert(pair<string, char>(stud2.name, stud2.value));
    StudentGradeMap.insert(pair<string, char>(stud3.name, stud3.value));
    StudentGradeMap.insert(pair<string, char>(stud4.name, stud4.value));

    iter = StudentGradeMap.begin();
    cout << "Students: " << endl;
    for (int i = 0; iter != StudentGradeMap.end(); iter++, i++) {
        cout << iter->first << endl;
    }
   
    string name;
    char grade;
    cout << "\nPlease enter name: " << endl;
    cin >> name;
    int i = 0;
    for (auto iter = StudentGradeMap.begin(); iter != StudentGradeMap.end(); ++iter)
    {
        if (name == iter->first)
        {
            i = 1;
            cout << iter->first << " : " << iter->second << endl;
        }
    }
   
    if (i == 0) {
        cout << "Please enter " << name << "'s grade\n";
        cin >> grade;
        StudentGrade st{ name, grade };
        StudentGradeMap.insert(pair<string, char>(name, grade));


        cout << "\nStudent grade list: \n";
        for (auto iter = StudentGradeMap.begin(); iter != StudentGradeMap.end(); ++iter)
        {
            cout <<"\n"<< iter->first << " : " << iter->second;
        }
    }
    return 0;
}





