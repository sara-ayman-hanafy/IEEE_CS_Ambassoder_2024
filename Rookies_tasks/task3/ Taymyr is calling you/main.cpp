#include <iostream>
using namespace std;

int main()
{
    int n , m , z;
    cin >> n >> m >> z;
    int a = n;
    int b = m;
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    int gcd = a;

    int lcm = (n / gcd) * m;

    int counter = z / lcm;

    cout << counter << endl;

    return 0;
}
