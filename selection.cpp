//selection sort
// 1 not a optimal algo because of time complexity o(n^2);
// 2 use to sort ele in assen or decen
#include<iostream>
using  namespace std;
int main()
{
  int arr[1000];
  int n;//size of array
  cout<<"Enter the size of array=";
  cin>>n;
  //insert element in array
  cout<<"Enter the element  of array=";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  //outer loop
  for(int i=0;i<n-1;i++)
  {
    int index=i;
    //outer loop
    for(int j=i+1;j<n;j++)
    {
      if(arr[j]<arr[index])
      index=j;
    }
    swap(arr[index],arr[i]);
  }
  //priint loop  element
  cout<<"sorted array =";
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }

  

}
