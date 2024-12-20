//frst and last occrrence of given number
#include<iostream>
using namespace std;
int main()
{
  int arr[100];
  int n;
  cout<<"Enter the size of array-";
  cin>>n;
   cout<<"Enter the elements of array=";
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
   int start=0,end=n,mid,last,first;
   int ans;
   cout<<"enter the number whose oc you need to know=";
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
    end=mid-1;
   }
   cout<<first<<" ";
   start=0;end=n;
   //last occerrence
   while(start<=end)
   {
    mid=(start+end)/2;
    if(arr[mid]==ans)
    {
      last=mid;
      start=mid+1;
    }
    else if(arr[mid]<ans)
    start=mid+1;
    else
    end=mid-1;
   }
   cout<<last<<" ";

}