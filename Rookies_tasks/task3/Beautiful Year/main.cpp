#include <iostream>

using namespace std;

int main()
{
    int  year ;
  cin >> year;
   while(true){
    year+=1;
    int a =year / 1000 % 10 ;
    int b =year / 100 % 10 ;
    int c =year / 10 % 10 ;
    int d =year % 10 ;

    if(a != b && a != c && a != d && c!=b && c!=d && b != d ){
        cout<<year <<endl;
        break;
    }
   }
    return 0;
}
