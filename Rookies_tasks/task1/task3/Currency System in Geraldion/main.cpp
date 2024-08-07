#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n ;
    int arr[n] ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i] ;
    }

    sort(arr, arr + n);

    int unfortunate = 0 ;

    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] > unfortunate)
        {
          break;
        }
    }

    if (unfortunate >= 1)
    {
        cout << unfortunate << endl;
    }
    else
    {
        cout << -1 << endl;

    }
     return 0;

}

/*#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int smallest_unfortunate_sum = 0; // Start with 1

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > smallest_unfortunate_sum)
        {
            // If current banknote is greater than the current `smallest_unfortunate_sum`,
            // then `smallest_unfortunate_sum` cannot be formed with any combination of the banknotes.
            break;
        }
        smallest_unfortunate_sum += arr[i];
    }

    if (smallest_unfortunate_sum > 1)
    {
        // Output the smallest unfortunate sum
        cout << smallest_unfortunate_sum << endl;
    }
    else
    {
        // If no unfortunate sum was found (i.e., `smallest_unfortunate_sum` is 1), then all positive sums can be formed
        cout << -1 << endl;
    }

    return 0;
}
*/
