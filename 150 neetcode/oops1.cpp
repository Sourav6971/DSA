#include <bits/stdc++.h>
using namespace std;
class Student
{
private:
    string name;
    int marks;

public:
    Student(string name, int marks)
    {
        this->name = name;
        this->marks = marks;
    }

    void display()
    {
        cout << "name= " << this->name << endl;
        cout << "marks= " << this->marks;
    }
    int grade()
    {
        return (this->marks / 10);
    }
};

int main()
{
    Student sourav("sourav", 69);
    sourav.display();
    int grade = sourav.grade();
    cout << "\ngrade= " << grade << endl;
}