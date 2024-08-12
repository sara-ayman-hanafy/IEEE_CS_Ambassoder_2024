#include <iostream>

using namespace std;

int main()
{
     int n , a , b ;
     cin>>n >> a >> b;

     int moves=0;
     if(b<0){
        b=abs(b);
        moves = b % n;
        a-=moves;
         if(a<=0){
            a = a + n ;
         }
     }else{
      moves = b % n;
        a+=moves;
         if(a>n){
            a = a - n ;
         }
     }
     cout<<a;

    return 0;
}
