#include <iostream>

using namespace std;

int main()
{
    int socksPair ;
    cin>>socksPair;
    if(socksPair == 1)
    {
        int s1, s2 ;
        cin >> s1 >> s2 ;
        cout<<1;
        return 0 ;
    }

    int arr[socksPair + 1] = {0} ;
    int table =0, counter =0 ;
    for(int i = 0 ; i <socksPair * 2 ; i++)
    {
        int socks;
        cin>>socks;
        if(arr[socks] == 0 )
        {
            arr[socks]++;
            table++;
            counter =max(table, counter);

        }
        else
        {
            table--;
        }
    }
    cout<<counter <<endl;

    return 0;
}
