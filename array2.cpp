#include<iostream>
using namespace std;
int main(){
   int array[15];
   cout<<"give me value of 0"<<array[0]<<endl;
    
    int second[]={1,3,6};
    cout<<"second array value="<<second[2]<<endl;
    
    int third[15]={3,6};
    int n=1;
    for (int  i = 0; i <=n; i++)
    {
      cout<<"third array value="<<third[0]<<endl;

    }
    
    
   int fourth[16]={1,2,3,4};
   int v=1;
   for (int i = 0; i <=v; i++)
   {
          cout<<fourth[i]<<endl;

   }
   
   int five[]={1,2,3,4,5,6,7,8};

   cout<<"size of five="<<sizeof(five)<<endl;           //array size
   cout<<"leanth of five="<<sizeof(five)/sizeof(five[0])<<endl;    //array leanth
   
   
   return 0;


}