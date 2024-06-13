#include <iostream>
#include <algorithm>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
    int math;
    int eng;

    Student() {}

    Student(string nm, int c, char s, int i, int m, int e)
        : name(nm), cls(c), section(s), id(i), math(m), eng(e) {}

    int total() const
    {
        return math + eng;
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
        int c;
        char s;
        int id, m, e;
        cin >> nm >> c >> s >> id >> m >> e;
        students[i] = Student(nm, c, s, id, m, e);
    }

    sort(students, students + n, [](const Student &a, const Student &b)
         {
        if (a.total() != b.total()) {
            return a.total() > b.total();
        } else {
            return a.id < b.id;
        } });

    for (int i = 0; i < n; ++i)
    {
        cout << students[i].name << " " << students[i].cls << " " << students[i].section << " "
             << students[i].id << " " << students[i].math << " " << students[i].eng << endl;
    }

    return 0;
}
