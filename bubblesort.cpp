//bubble sort is a sorting algo which is used to sort the list of element in a pair it compare the first and secound element of aaray and continue the process till the largest element goes to the end
#include<iostream>
using namespace std;
int main()
{
  int n;
  //size of array
  cout<<"enter the size of array=";
  cin>>n;
  int arr[1000];
  cout<<"Enter the element of array=";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  //outer loop
  for(int i=n-2;i>=0;i--) //reverse loop
  {
    //inner loop
    for(int j=0;j<=i;j++)
    {
      if(arr[j]>arr[j+1])
      swap(arr[j],arr[j+1]);
     
    }
     
  }
  //sorted array
  cout<<"sorted array element = ";
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }

}
