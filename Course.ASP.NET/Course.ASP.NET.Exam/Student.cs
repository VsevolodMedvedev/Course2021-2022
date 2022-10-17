using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;

namespace ITMO.ASP.Exam
{
    public class Student
    {
        public int StudentID { get; set; }
        public string FirstName { get; set; }
        public string LastName { get; set; }
        public string Group { get; set; }
        public int FirstScore { get; set; }
        public int SecondScore { get; set; }
        public int ThirdScore { get; set; }

        public Student() { }
        public Student(string firstName, string lastName, string group, int firstScore, int secondScore,int thirdScore)
        {
            FirstName = firstName;
            LastName = lastName;
            Group = group;
            FirstScore = firstScore;
            SecondScore = secondScore;
            ThirdScore = thirdScore;
        }
    }
}