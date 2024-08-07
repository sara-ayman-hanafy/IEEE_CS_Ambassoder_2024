#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int before[n], after[n];
    for(int i =0 ; i < n ; i ++)
    {
        cin >> before[i] >>after[i] ;
    }

    bool flag1 = 0 ;
    bool flag2 = 0 ;
    int temp = 0 ;

    for(int i =0 ; i < n ; i ++)
    {
        if(before[i] != after[i])
        {
            flag1 = 1;
            break;
        }

        if(temp < before[i] && before[i] == after[i] && i !=0) //1500
        {
            flag2 =1 ;

        }
        temp = before[i];
    }

    if(flag1 == 1)
        cout << "rated" << endl ;
    else  if(flag2 == 1)
       cout << "unrated" << endl ;
    else
        cout << "maybe" << endl ;





    return 0;
}
