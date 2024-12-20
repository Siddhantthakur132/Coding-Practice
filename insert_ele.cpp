//insert element and know the actual position if they are present in array
#include<iostream>
using namespace std;
int main()
{
  int arr[100];
  int n;
  cout<<"Enter the size of array=";
  cin>>n;
   cout<<"Enter the elements of array=";
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
   int start=0,end=n,mid,last,first;
   int ans;
   cout<<"enter the number whose position you need to know=";
   cin>>ans;
   //first occurrence
   while(start<=end)
   {
    mid=(start+end)/2;
    if(arr[mid]==ans)
    {
      first=mid;
      end=mid-1;
    }
    else if(arr[mid]<ans)
    start=mid+1;
    else
    {
      first=mid;
     end=mid-1;   
    }
  
   }
   cout<<first;
}