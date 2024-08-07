#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
   long long n;
   cin >> n;
   long long arr[n];

   for(int i = 0 ; i < n ; ++i){
    cin >> arr[i];
   }
   sort(arr ,arr + n);
  long long sum = 0;
  for(int i = 0 ; i < n ; ++i){
     sum+=arr[i];
  }
    if(sum % 2 == 0){
        cout<<sum;

    }else{
         for(int i = 0 ; i < n ; ++i){
          sum = sum - arr[i];
          if(sum % 2 == 0){
            break;
          }
    }
    cout<< sum;
    }


    return 0;
}
