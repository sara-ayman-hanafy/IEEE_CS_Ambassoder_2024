#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string results[t];

    for (int testcase = 0; testcase < t; ++testcase)
    {
        string cards;
        cin >> cards;

        int counter = 0;
        string result = "";

        int dimensions[6][2] = {{1, 12}, {2, 6}, {3, 4}, {4, 3}, {6, 2}, {12, 1}};

        for (int i = 0; i < 6; ++i)
        {
            int a = dimensions[i][0];
            int b = dimensions[i][1];
            bool win = false;

            for (int j = 0; j < b; ++j)
            {
                bool x = true;
                for (int k = 0; k < a; ++k)
                {
                    if (cards[k * b + j] != 'X')
                    {
                        x = false;
                        break;
                    }
                }
                if (x)
                {
                    win = true;
                    break;
                }
            }

            if (win)
            {
                if (counter > 0) result += " ";
                result += to_string(a) + "x" + to_string(b);
                counter++;
            }
        }

        if (counter > 0)
        {
            results[testcase] = to_string(counter) + " " + result;
        }
        else
        {
            results[testcase] = "0";
        }
    }

    for (int i = 0; i < t; ++i)
    {
        cout << results[i] << endl;
    }

    return 0;
}
