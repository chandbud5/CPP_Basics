#include <iostream>
using namespace std;

class Student{
    private:
        double cgpa;
    public:
        string name;
        int number;
        Student(string Name, int roll, double CGPA)
        {
            name = Name;
            number = roll;
            cgpa = CGPA;
        }

        void out()
        {
            cout << "Name is " << name << endl;
            cout << "Roll Number is " << number << endl;
        }
        void getcgpa()  //Getters for CGPA
        {
            cout << "CGPA is " << cgpa << endl;
        }
        void setcgpa(double c)     // Setters for CGPA
        {
            cgpa = c;
        }
};

int main()
{
    Student s1("Abc", 3, 8.9);
    s1.out();
    s1.getcgpa();
    s1.setcgpa(7.98);
    s1.getcgpa();
    return 0;
}

