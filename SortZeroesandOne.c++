#include<iostream>
#include<vector>
using namespace std;
     
 void SortZeroesandOne(vector<int>&v){
    int Zeroes_count=0;

    for (int ele:v){          // Each loop
        if (ele==0)  
        {
          Zeroes_count++;
        }
    }
    for (int i = 0; i <v.size(); i++)
    {
        if (i<Zeroes_count)
        {
            v[i]=0;
        }
        else
        v[i]=1;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for (int i = 0; i <n; i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    SortZeroesandOne(v);

    for (int i = 0; i <n; i++)
    {
         cout<<v[i]<<" ";
    }
    cout<<endl;
    
    

}
