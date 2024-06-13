#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char section;
    int id;

    Student() {}

    Student(string name, int cls, char section, int id)
    {
        this->name = name;
        this->cls = cls;
        this->section = section;
        this->id = id;
    }
};
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    Student students[n];
    for (int i = 0; i < n; ++i)
    {
        string nm;
        int cls;
        char section;
        int id;
        cin >> nm >> cls >> section >> id;
        students[i] = Student(nm, cls, section, id);
    }
    for (int i = 0; i < n / 2; ++i)
    {
        swap(students[i].section, students[n - i - 1].section);
    }
    for (int i = 0; i < n; ++i)
    {
        cout << students[i].name << " " << students[i].cls << " " << students[i].section << " " << students[i].id << endl;
    }

    return 0;
}