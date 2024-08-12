#include <iostream>

using namespace std;

int main()
{
    int k , r  ,counter = 1;
    cin >> k >> r ;

    while(true){
    int result = k * counter ;
    if(result % 10 == 0 || result % 10 == r){
            break;
    }else{
          counter++;
        }
    }
  cout<<counter ;
    return 0;
}
