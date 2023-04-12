#include<iostream>
using namespace std;
int main(){
  // 
  int array[]={1,34,56,77,88};
  int size=sizeof(array)/sizeof(array[0]);
  int largest_num=0;
  for (int i = 0; i <size; i++)
  {
    if (array[i]>largest_num)
    {
      largest_num=array[i];    }
    
  }
  cout<<largest_num<<endl;
  

    return 0;

}
