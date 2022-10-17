using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab3.Control
{
    internal class Person
    {
        public string Name;
        public string LastName;
        public string SecondName;
        public int Age;

        public Person(string name, string lastName, string secondName, int age)
        {
            Name = name;
            LastName = lastName;
            SecondName = secondName;
            this.Age = age;
        }
        public string ShowTxt()
        {
            return "Фамилия:\t" + LastName + "\nИмя:\t\t" + Name + "\nОтчество:\t" + SecondName + "\nВозраст:\t\t" + Age;
        }
        public Person()
        { }
    }
}
