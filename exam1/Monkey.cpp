#include <bits/stdc++.h>
using namespace std;
char *s(char *str)
{
    int i = 0, j = 0;
    while (str[i])
    {
        if (str[i] != ' ')
            str[j++] = str[i];
        i++;
    }
    str[j] = '\0';
    return str;
}
int main()
{
    char arr[100001];
    while (cin.getline(arr, 100001))
    {
        sort(arr, arr + strlen(arr));
        cout << s(arr) << endl;
    }

    return 0;
}
