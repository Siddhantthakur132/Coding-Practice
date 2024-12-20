#include<iostream>
using namespace std;
int main()
{
  int arr[1000];
  int n;
  cout<<"Enter the size of array=";
  cin>>n;
  cout<<"Enter the element of array=";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int start=0,end=n-1;
  int key;

  cout<<"Enter the element to be serached=";
    cin>>key;
  for(int i=0;i<n;i++)
  {
    int mid=(start+end)/2;
    if(arr[mid]==key)
    {
      cout<<"Element is present at index "<<mid;
      break;
    }
    else if(arr[mid]<key)
    { 
      
      start=mid+1;
    }
    else
    {
      end=mid-1;
    }
  }
  
}