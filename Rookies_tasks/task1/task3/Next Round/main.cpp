#include <iostream>

using namespace std;

int main()
{
 int n , k;
  cin >> n >> k ;
  int arr[n];

  for(int i = 0 ; i < n ; i++){
    cin >> arr[i] ;
  }

   int counter = 0 ;
   for(int i = 0 ; i < n  ; i++){
         if(arr[i]>0 && arr[i] >= arr[k - 1]){// not arr[k]
            counter++;
        }
   }
   cout << counter ;
    return 0;
}
