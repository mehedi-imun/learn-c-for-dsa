#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
    string name;
    int roll;
    int marks;
};
int main()
{
    int n;
    cin >> n;
    Student *s = new Student[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].name >> s[i].roll >> s[i].marks;
    }
    Student max ;
    max.marks = INT_MIN;
    for (int i = 0; i < n; i++)
    {
       if(s[i].marks > max.marks){
           max = s[i];
       }
    }
    cout << max.name << " " << max.roll << " " << max.marks << endl;    
    
    return 0;
}