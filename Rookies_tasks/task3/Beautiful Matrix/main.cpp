#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n = 5 ;
    int counter =0 ;
    int mat[n][n];
    for(int i = 0 ; i < n ;i++){
        for(int j = 0 ; j < n ; j++){
            cin >> mat[i][j];
        }
    }
     for(int i = 0 ; i < n ;i++){
        for(int j = 0 ; j < n ; j++){
          if(mat[i][j] == 1){
            cout<<abs(i-2)+abs(j-2)<<endl;
          }
        }
        }
    return 0;
}
