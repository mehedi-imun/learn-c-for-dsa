#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, x;
        cin >> s;
        cin >> x;
        size_t pos = 0;
        while (pos < s.length())
        {
            pos = s.find(x, pos);
            if (pos >= s.length())
                break;
            s.replace(pos, x.length(), "#");
            pos += 1;
        }

        cout << s << endl;
    }

    return 0;
}
