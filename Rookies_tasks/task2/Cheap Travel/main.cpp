#include <iostream>

using namespace std;

int main()
{
   int n , m , a , b ;
   cin >> n >> m >> a >> b;

   int t1 = n * a ;
   int remainder = n % m;
   int t2 =(remainder == 0)?(n / m)* b : ((n/m)+1)*b ;
   int t3 = LONG_MAX;

   if(remainder!=0){
    t3 = remainder* a + (n / m )* b;
   }
   cout << min(t1 , min(t2 , t3))<<endl;
    return 0;
}
