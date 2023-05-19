#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int array[n][m];
    for (int i = 0; i <n; i++)
    {
         for (int j = 0;j <m; j++)
         {
            cin>>array[i][j];
         }
    }
    int tranpoes[m][n];
    for (int i = 0; i <m; i++)
    {
      for (int j = 0; j< n; j++)
      {
         tranpoes[i][j]=array[j][i];
      }      
    }

    for (int i = 0; i < m; i++)
    {
        for (int j= 0; j < n; j++)
        {
            
         cout<<tranpoes[i][j]<<" ";
        
        }
        cout<<endl;     
    }

  return 0;

}