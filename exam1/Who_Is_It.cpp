#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    char name[101];
    char section;
    int marks;

    Student(int id, const char *name, char section, int marks)
    {
        this->id = id;
        strcpy(this->name, name);
        this->section = section;
        this->marks = marks;
    }
};

int main()
{
    int n;
    cin >> n;

    for (int t = 0; t < n; ++t)
    {
        int maxMarks = -1;
        int topId = 0;
        char topName[101] = "";
        char topSection = '\0';

        for (int i = 0; i < 3; ++i)
        {
            int id, marks;
            char name[101];
            char section;
            cin >> id >> name >> section >> marks;
            if (marks > maxMarks || (marks == maxMarks && id < topId))
            {
                maxMarks = marks;
                topId = id;
                strcpy(topName, name);
                topSection = section;
            }
        }

        Student topStudent(topId, topName, topSection, maxMarks);
        cout << topStudent.id << " " << topStudent.name << " " << topStudent.section << " " << topStudent.marks << endl;
    }

    return 0;
}
