#include <iostream>
#include <algorithm>
using namespace std;

struct Student {
    string name;
    int cls;
    char section;
    int id;
    int math;
    int eng;
};

bool compare(const Student& a, const Student& b) {
    if (a.eng != b.eng) {
        return a.eng > b.eng;
    } else if (a.math != b.math) {
        return a.math > b.math;
    } else {
        return a.id < b.id;
    }
}

int main() {
    int n;
    cin >> n;
    cin.ignore();

    Student students[n];

    for (int i = 0; i < n; ++i) {
        cin >> students[i].name >> students[i].cls >> students[i].section
            >> students[i].id >> students[i].math >> students[i].eng;
    }

    sort(students, students + n, compare);

    for (int i = 0; i < n; ++i) {
        cout << students[i].name << " " << students[i].cls << " " << students[i].section << " "
             << students[i].id << " " << students[i].math << " " << students[i].eng << endl;
    }

    return 0;
}
