#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    int n;
    cin >> n;
    char str[n];
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }

    bool alphabet[26] = {false};
    for (int i = 0; i < n; i++)
    {
        if (isalpha(str[i]))
        {
            alphabet[tolower(str[i]) - 'a'] = true;
        }
    }

    bool pangram = true;
    for (int i = 0; i < 26; i++)
    {
        if (!alphabet[i])
        {
            is_pangram = false;
            break;
        }
    }

    if (pangram)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
