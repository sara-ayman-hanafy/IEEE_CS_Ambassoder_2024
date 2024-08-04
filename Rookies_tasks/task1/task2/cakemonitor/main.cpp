#include <iostream>

using namespace std;

int main()
{
    int r,c;
    int counter=0;
    cin>>r>>c;
    char arr[r][c];
  for(int i=0;i<r;i++){
     for(int j=0;j<c;j++){
         cin>>arr[i][j];
     }
   }
   //check the rows
  for(int i=0;i<r;i++){
        bool flag=0;
     for(int j=0;j<c;j++){
        if(arr[i][j]=='S')
          flag=1;
        }
     if(flag==0){
     counter+=c;
     for(int k=0;k<c;k++){  // mark 0  row elements as X
         arr[i][k]='X';
     }
    }
 }
 //check the coulmn
 for(int i=0;i<c;i++){
        bool flag=0;
     for(int j=0;j<r;j++){
         if(arr[j][i]=='S')
         flag=1;
     }
     if(flag==0){
       for(int k=0;k<r;k++){
           if(arr[k][i]!='X')
           counter++;
       }
    }
 }
 cout<<counter;
    return 0;
}
