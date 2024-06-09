#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;

        int arr[100];
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int flag = 0;
        for (int i = 0; i < n - 2 && flag == 0; ++i)
        {
            for (int j = i + 1; j < n - 1; ++j)
            {
                for (int k = j + 1; k < n; ++k)
                {
                    if (arr[i] + arr[j] + arr[k] == s)
                    {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 1)
                    break;
            }
        }

        cout << (flag == 1 ? "YES" : "NO") << endl;
    }

    return 0;
}
